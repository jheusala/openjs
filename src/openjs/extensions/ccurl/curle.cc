obj->Set(v8::String::New("CURLE_OK"), v8::Integer::NewFromUnsigned(CURLE_OK) );
obj->Set(v8::String::New("CURLE_UNSUPPORTED_PROTOCOL"), v8::Integer::NewFromUnsigned(CURLE_UNSUPPORTED_PROTOCOL) );
obj->Set(v8::String::New("CURLE_FAILED_INIT"), v8::Integer::NewFromUnsigned(CURLE_FAILED_INIT) );
obj->Set(v8::String::New("CURLE_URL_MALFORMAT"), v8::Integer::NewFromUnsigned(CURLE_URL_MALFORMAT) );
obj->Set(v8::String::New("CURLE_COULDNT_RESOLVE_PROXY"), v8::Integer::NewFromUnsigned(CURLE_COULDNT_RESOLVE_PROXY) );
obj->Set(v8::String::New("CURLE_COULDNT_RESOLVE_HOST"), v8::Integer::NewFromUnsigned(CURLE_COULDNT_RESOLVE_HOST) );
obj->Set(v8::String::New("CURLE_COULDNT_CONNECT"), v8::Integer::NewFromUnsigned(CURLE_COULDNT_CONNECT) );
obj->Set(v8::String::New("CURLE_FTP_WEIRD_SERVER_REPLY"), v8::Integer::NewFromUnsigned(CURLE_FTP_WEIRD_SERVER_REPLY) );
obj->Set(v8::String::New("CURLE_REMOTE_ACCESS_DENIED"), v8::Integer::NewFromUnsigned(CURLE_REMOTE_ACCESS_DENIED) );
obj->Set(v8::String::New("CURLE_FTP_WEIRD_PASS_REPLY"), v8::Integer::NewFromUnsigned(CURLE_FTP_WEIRD_PASS_REPLY) );
obj->Set(v8::String::New("CURLE_FTP_WEIRD_PASV_REPLY"), v8::Integer::NewFromUnsigned(CURLE_FTP_WEIRD_PASV_REPLY) );
obj->Set(v8::String::New("CURLE_FTP_WEIRD_227_FORMAT"), v8::Integer::NewFromUnsigned(CURLE_FTP_WEIRD_227_FORMAT) );
//obj->Set(v8::String::New("CURLE_FTP_PRET_FAILED"), v8::Integer::NewFromUnsigned(CURLE_FTP_PRET_FAILED) );
obj->Set(v8::String::New("CURLE_FTP_CANT_GET_HOST"), v8::Integer::NewFromUnsigned(CURLE_FTP_CANT_GET_HOST) );
obj->Set(v8::String::New("CURLE_FTP_COULDNT_SET_TYPE"), v8::Integer::NewFromUnsigned(CURLE_FTP_COULDNT_SET_TYPE) );
obj->Set(v8::String::New("CURLE_PARTIAL_FILE"), v8::Integer::NewFromUnsigned(CURLE_PARTIAL_FILE) );
obj->Set(v8::String::New("CURLE_FTP_COULDNT_RETR_FILE"), v8::Integer::NewFromUnsigned(CURLE_FTP_COULDNT_RETR_FILE) );
obj->Set(v8::String::New("CURLE_QUOTE_ERROR"), v8::Integer::NewFromUnsigned(CURLE_QUOTE_ERROR) );
obj->Set(v8::String::New("CURLE_HTTP_RETURNED_ERROR"), v8::Integer::NewFromUnsigned(CURLE_HTTP_RETURNED_ERROR) );
obj->Set(v8::String::New("CURLE_WRITE_ERROR"), v8::Integer::NewFromUnsigned(CURLE_WRITE_ERROR) );
obj->Set(v8::String::New("CURLE_UPLOAD_FAILED"), v8::Integer::NewFromUnsigned(CURLE_UPLOAD_FAILED) );
obj->Set(v8::String::New("CURLE_READ_ERROR"), v8::Integer::NewFromUnsigned(CURLE_READ_ERROR) );
obj->Set(v8::String::New("CURLE_OUT_OF_MEMORY"), v8::Integer::NewFromUnsigned(CURLE_OUT_OF_MEMORY) );
obj->Set(v8::String::New("CURLE_OPERATION_TIMEDOUT"), v8::Integer::NewFromUnsigned(CURLE_OPERATION_TIMEDOUT) );
obj->Set(v8::String::New("CURLE_FTP_PORT_FAILED"), v8::Integer::NewFromUnsigned(CURLE_FTP_PORT_FAILED) );
obj->Set(v8::String::New("CURLE_FTP_COULDNT_USE_REST"), v8::Integer::NewFromUnsigned(CURLE_FTP_COULDNT_USE_REST) );
obj->Set(v8::String::New("CURLE_RANGE_ERROR"), v8::Integer::NewFromUnsigned(CURLE_RANGE_ERROR) );
obj->Set(v8::String::New("CURLE_HTTP_POST_ERROR"), v8::Integer::NewFromUnsigned(CURLE_HTTP_POST_ERROR) );
obj->Set(v8::String::New("CURLE_SSL_CONNECT_ERROR"), v8::Integer::NewFromUnsigned(CURLE_SSL_CONNECT_ERROR) );
obj->Set(v8::String::New("CURLE_BAD_DOWNLOAD_RESUME"), v8::Integer::NewFromUnsigned(CURLE_BAD_DOWNLOAD_RESUME) );
obj->Set(v8::String::New("CURLE_FILE_COULDNT_READ_FILE"), v8::Integer::NewFromUnsigned(CURLE_FILE_COULDNT_READ_FILE) );
obj->Set(v8::String::New("CURLE_LDAP_CANNOT_BIND"), v8::Integer::NewFromUnsigned(CURLE_LDAP_CANNOT_BIND) );
obj->Set(v8::String::New("CURLE_LDAP_SEARCH_FAILED"), v8::Integer::NewFromUnsigned(CURLE_LDAP_SEARCH_FAILED) );
obj->Set(v8::String::New("CURLE_FUNCTION_NOT_FOUND"), v8::Integer::NewFromUnsigned(CURLE_FUNCTION_NOT_FOUND) );
obj->Set(v8::String::New("CURLE_ABORTED_BY_CALLBACK"), v8::Integer::NewFromUnsigned(CURLE_ABORTED_BY_CALLBACK) );
obj->Set(v8::String::New("CURLE_BAD_FUNCTION_ARGUMENT"), v8::Integer::NewFromUnsigned(CURLE_BAD_FUNCTION_ARGUMENT) );
obj->Set(v8::String::New("CURLE_INTERFACE_FAILED"), v8::Integer::NewFromUnsigned(CURLE_INTERFACE_FAILED) );
obj->Set(v8::String::New("CURLE_TOO_MANY_REDIRECTS"), v8::Integer::NewFromUnsigned(CURLE_TOO_MANY_REDIRECTS) );
obj->Set(v8::String::New("CURLE_UNKNOWN_TELNET_OPTION"), v8::Integer::NewFromUnsigned(CURLE_UNKNOWN_TELNET_OPTION) );
obj->Set(v8::String::New("CURLE_TELNET_OPTION_SYNTAX"), v8::Integer::NewFromUnsigned(CURLE_TELNET_OPTION_SYNTAX) );
obj->Set(v8::String::New("CURLE_PEER_FAILED_VERIFICATION"), v8::Integer::NewFromUnsigned(CURLE_PEER_FAILED_VERIFICATION) );
obj->Set(v8::String::New("CURLE_GOT_NOTHING"), v8::Integer::NewFromUnsigned(CURLE_GOT_NOTHING) );
obj->Set(v8::String::New("CURLE_SSL_ENGINE_NOTFOUND"), v8::Integer::NewFromUnsigned(CURLE_SSL_ENGINE_NOTFOUND) );
obj->Set(v8::String::New("CURLE_SSL_ENGINE_SETFAILED"), v8::Integer::NewFromUnsigned(CURLE_SSL_ENGINE_SETFAILED) );
obj->Set(v8::String::New("CURLE_SEND_ERROR"), v8::Integer::NewFromUnsigned(CURLE_SEND_ERROR) );
obj->Set(v8::String::New("CURLE_RECV_ERROR"), v8::Integer::NewFromUnsigned(CURLE_RECV_ERROR) );
obj->Set(v8::String::New("CURLE_SSL_CERTPROBLEM"), v8::Integer::NewFromUnsigned(CURLE_SSL_CERTPROBLEM) );
obj->Set(v8::String::New("CURLE_SSL_CIPHER"), v8::Integer::NewFromUnsigned(CURLE_SSL_CIPHER) );
obj->Set(v8::String::New("CURLE_SSL_CACERT"), v8::Integer::NewFromUnsigned(CURLE_SSL_CACERT) );
obj->Set(v8::String::New("CURLE_BAD_CONTENT_ENCODING"), v8::Integer::NewFromUnsigned(CURLE_BAD_CONTENT_ENCODING) );
obj->Set(v8::String::New("CURLE_LDAP_INVALID_URL"), v8::Integer::NewFromUnsigned(CURLE_LDAP_INVALID_URL) );
obj->Set(v8::String::New("CURLE_FILESIZE_EXCEEDED"), v8::Integer::NewFromUnsigned(CURLE_FILESIZE_EXCEEDED) );
obj->Set(v8::String::New("CURLE_USE_SSL_FAILED"), v8::Integer::NewFromUnsigned(CURLE_USE_SSL_FAILED) );
obj->Set(v8::String::New("CURLE_SEND_FAIL_REWIND"), v8::Integer::NewFromUnsigned(CURLE_SEND_FAIL_REWIND) );
obj->Set(v8::String::New("CURLE_SSL_ENGINE_INITFAILED"), v8::Integer::NewFromUnsigned(CURLE_SSL_ENGINE_INITFAILED) );
obj->Set(v8::String::New("CURLE_LOGIN_DENIED"), v8::Integer::NewFromUnsigned(CURLE_LOGIN_DENIED) );
obj->Set(v8::String::New("CURLE_TFTP_NOTFOUND"), v8::Integer::NewFromUnsigned(CURLE_TFTP_NOTFOUND) );
obj->Set(v8::String::New("CURLE_TFTP_PERM"), v8::Integer::NewFromUnsigned(CURLE_TFTP_PERM) );
obj->Set(v8::String::New("CURLE_REMOTE_DISK_FULL"), v8::Integer::NewFromUnsigned(CURLE_REMOTE_DISK_FULL) );
obj->Set(v8::String::New("CURLE_TFTP_ILLEGAL"), v8::Integer::NewFromUnsigned(CURLE_TFTP_ILLEGAL) );
obj->Set(v8::String::New("CURLE_TFTP_UNKNOWNID"), v8::Integer::NewFromUnsigned(CURLE_TFTP_UNKNOWNID) );
obj->Set(v8::String::New("CURLE_REMOTE_FILE_EXISTS"), v8::Integer::NewFromUnsigned(CURLE_REMOTE_FILE_EXISTS) );
obj->Set(v8::String::New("CURLE_TFTP_NOSUCHUSER"), v8::Integer::NewFromUnsigned(CURLE_TFTP_NOSUCHUSER) );
obj->Set(v8::String::New("CURLE_CONV_FAILED"), v8::Integer::NewFromUnsigned(CURLE_CONV_FAILED) );
obj->Set(v8::String::New("CURLE_CONV_REQD"), v8::Integer::NewFromUnsigned(CURLE_CONV_REQD) );
obj->Set(v8::String::New("CURLE_SSL_CACERT_BADFILE"), v8::Integer::NewFromUnsigned(CURLE_SSL_CACERT_BADFILE) );
obj->Set(v8::String::New("CURLE_REMOTE_FILE_NOT_FOUND"), v8::Integer::NewFromUnsigned(CURLE_REMOTE_FILE_NOT_FOUND) );
obj->Set(v8::String::New("CURLE_SSH"), v8::Integer::NewFromUnsigned(CURLE_SSH) );
obj->Set(v8::String::New("CURLE_SSL_SHUTDOWN_FAILED"), v8::Integer::NewFromUnsigned(CURLE_SSL_SHUTDOWN_FAILED) );
obj->Set(v8::String::New("CURLE_AGAIN"), v8::Integer::NewFromUnsigned(CURLE_AGAIN) );
//obj->Set(v8::String::New("CURLE_SSL_CRL_BADFILE"), v8::Integer::NewFromUnsigned(CURLE_SSL_CRL_BADFILE) );
//obj->Set(v8::String::New("CURLE_SSL_ISSUER_ERROR"), v8::Integer::NewFromUnsigned(CURLE_SSL_ISSUER_ERROR) );
//obj->Set(v8::String::New("CURLE_FTP_PRET_FAILED"), v8::Integer::NewFromUnsigned(CURLE_FTP_PRET_FAILED) );
//obj->Set(v8::String::New("CURLE_RTSP_CSEQ_ERROR"), v8::Integer::NewFromUnsigned(CURLE_RTSP_CSEQ_ERROR) );
//obj->Set(v8::String::New("CURLE_RTSP_SESSION_ERROR"), v8::Integer::NewFromUnsigned(CURLE_RTSP_SESSION_ERROR) );
//obj->Set(v8::String::New("CURLE_FTP_BAD_FILE_LIST"), v8::Integer::NewFromUnsigned(CURLE_FTP_BAD_FILE_LIST) );
//obj->Set(v8::String::New("CURLE_CHUNK_FAILED"), v8::Integer::NewFromUnsigned(CURLE_CHUNK_FAILED) );
