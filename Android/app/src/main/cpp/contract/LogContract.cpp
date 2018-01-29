#include <android/log.h>
#include "LogContract.h"

void LogContract::d(const char* format, ...) {
    va_list args;
    va_start(args, format);
    __android_log_vprint(ANDROID_LOG_DEBUG, "ademar", format, args);
    va_end(args);
}
