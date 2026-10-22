#pragma once

#include "preprocessor.h"

#define PROJECT_NAME            "NSMBU Deluxe RE findings"

#define PROJECT_VERSION_MAJOR   0
#define PROJECT_VERSION_MINOR   1
#define PROJECT_VERSION_PATCH   0

#define PROJECT_VERSION_STRING  PP_STR_VAL(PROJECT_VERSION_MAJOR) "." \
                                PP_STR_VAL(PROJECT_VERSION_MINOR) "." \
                                PP_STR_VAL(PROJECT_VERSION_PATCH)

#define PROJECT_VERSION_NUMBER  (((PROJECT_VERSION_MAJOR) << 16) | \
                                 ((PROJECT_VERSION_MINOR) << 8)  | \
                                 (PROJECT_VERSION_PATCH))
