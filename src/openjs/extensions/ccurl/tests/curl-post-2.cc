/* libcurl -- c test */

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <curl/curl.h>
#include <cstring>

/* Callback declarations */	
extern size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);

/* The main test code */
int main() {
	CURL *curl;
	CURLcode res;
	struct curl_slist* headers=NULL;
	
	curl_global_init(CURL_GLOBAL_ALL);
	curl = curl_easy_init();
	if(curl) {
		
		headers = curl_slist_append(headers, "Content-Type: application/json");
		
		std::string post_data = "[{\"session_id\":\"\",\"options\":{\"foo\":\"bar\"},\"free_args\":[],\"args\":[],\"command\":\"dummy\"}]";
		
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L );
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data.c_str() );
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, post_data.size() );
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
		curl_easy_setopt(curl, CURLOPT_URL, "https://secure.sendanor.fi/~jheusala/ccd-dev/ccd.fcgi");
		curl_easy_setopt(curl, CURLOPT_USERAGENT, "libcurl-agent/1.0");
		
		std::vector<char> data;
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
		res = curl_easy_perform(curl);
		
		std::cout << "We received:" << std::endl
		          << "--start--" << std::endl
		          << std::string(&(data[0]), data.size()) << std::endl
		          << "---end---" << std::endl;
		
		curl_slist_free_all(headers);
		curl_easy_cleanup(curl);
	}
	
	curl_global_cleanup();
	return 0;
}

/* Callback to write received data from the server */
size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
	const size_t realsize = size * nmemb;
	if(realsize < 1) return 0;
	
	std::vector<char>* data = (std::vector<char>*)userp;
	if(!data) return 0;
	
	const size_t prev_total_size = data->size();
	const size_t next_total_size = prev_total_size + realsize;
	
	data->resize(next_total_size, 0);
	if(data->size() != next_total_size) return 0;
	
	memcpy(&((*data)[prev_total_size]), buffer, realsize);
	
	return realsize;
}

/* EOF */
