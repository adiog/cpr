#ifndef CPR_DIGEST_H
#define CPR_DIGEST_H

#include "cpr/auth.h"
#include "cpr/defines.h"

namespace cpr {

    // useless!!
class Digest : public Authentication {
  public:
    using Authentication::Authentication;
};

} // namespace cpr

#endif
