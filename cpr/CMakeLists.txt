message(STATUS "Using CURL_INCLUDE_DIRS: ${CURL_INCLUDE_DIRS}.")

add_library(${CPR_LIBRARY}

    # Source files
    ${CMAKE_CURRENT_SOURCE_DIR}/auth.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/cookies.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/cprtypes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/error.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/multipart.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameters.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/payload.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/proxies.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/session.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/timeout.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/util.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ssl_options.cpp

    # Header files (useful in IDEs)
    "${CPR_INCLUDE_DIRS}/cpr/api.h"
    "${CPR_INCLUDE_DIRS}/cpr/auth.h"
    "${CPR_INCLUDE_DIRS}/cpr/body.h"
    "${CPR_INCLUDE_DIRS}/cpr/cookies.h"
    "${CPR_INCLUDE_DIRS}/cpr/cpr.h"
    "${CPR_INCLUDE_DIRS}/cpr/cprtypes.h"
    "${CPR_INCLUDE_DIRS}/cpr/curlholder.h"
    "${CPR_INCLUDE_DIRS}/cpr/defines.h"
    "${CPR_INCLUDE_DIRS}/cpr/digest.h"
    "${CPR_INCLUDE_DIRS}/cpr/error.h"
    "${CPR_INCLUDE_DIRS}/cpr/max_redirects.h"
    "${CPR_INCLUDE_DIRS}/cpr/multipart.h"
    "${CPR_INCLUDE_DIRS}/cpr/parameters.h"
    "${CPR_INCLUDE_DIRS}/cpr/payload.h"
    "${CPR_INCLUDE_DIRS}/cpr/proxies.h"
    "${CPR_INCLUDE_DIRS}/cpr/response.h"
    "${CPR_INCLUDE_DIRS}/cpr/session.h"
    "${CPR_INCLUDE_DIRS}/cpr/timeout.h"
    "${CPR_INCLUDE_DIRS}/cpr/util.h"
    "${CPR_INCLUDE_DIRS}/cpr/ssl_options.h"
    "${CPR_INCLUDE_DIRS}/cpr/url.h"
    "${CPR_INCLUDE_DIRS}/cpr/redirect.h"
    )

message(STATUS "Using CURL_LIBRARIES: ${CURL_LIBRARIES}.")
target_link_libraries(${CPR_LIBRARY}
    ${CURL_LIBRARIES})

if(NOT (CMAKE_VERSION VERSION_LESS 3.0))
    target_include_directories(${CPR_LIBRARY}
        PUBLIC
        ${CPR_INCLUDE_DIRS}
        ${CURL_INCLUDE_DIRS})
else()
    include_directories(
        ${CPR_INCLUDE_DIRS}
        ${CURL_INCLUDE_DIRS})
endif()
