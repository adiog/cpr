#ifndef CPR_URL_H
#define CPR_URL_H

#include <string>
namespace cpr {

class Url : public std::string {
public:
    Url() = default;
    using std::string::string;

    explicit Url(const std::string &std_string) : std::string(std_string) {}
    explicit Url(std::string &&std_string) : std::string(std::move(std_string)) {}
};
}
#endif //CPR_URL_H
