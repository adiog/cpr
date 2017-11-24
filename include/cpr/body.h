#ifndef CPR_BODY_H
#define CPR_BODY_H

#include <cstring>

#include <initializer_list>
#include <string>

#include "cpr/defines.h"

namespace cpr {

    // could be done in more optimal way - handle just a string_view
class Body : public std::string {
public:
    using std::string::string;
    explicit Body(const std::string& std_string) : std::string(std_string) {}
    explicit Body(std::string&& std_string) : std::string(std::move(std_string)) {}
};
} // namespace cpr

#endif
