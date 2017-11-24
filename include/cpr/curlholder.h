#ifndef CPR_CURL_HOLDER_H
#define CPR_CURL_HOLDER_H

#include <memory>

#include <curl/curl.h>

namespace cpr {

struct CurlHolder {
    CURL* handle;
    struct curl_slist* chunk; // TODO: NEVER USED (in 'read after write' sense)!
    struct curl_httppost* formpost; // TODO: NEVER USED - see above
    char error[CURL_ERROR_SIZE];
};

} // namespace cpr

#endif
