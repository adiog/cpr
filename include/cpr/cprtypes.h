#ifndef CPR_CPR_TYPES_H
#define CPR_CPR_TYPES_H

#include <map>
#include <string>
#include "cpr/redirect.h"
#include "cpr/url.h"

namespace cpr {

struct CaseInsensitiveCompare {
    bool operator()(const std::string& a, const std::string& b) const noexcept;
};

using Header = std::map<std::string, std::string, CaseInsensitiveCompare>;

} // namespace cpr

#endif
