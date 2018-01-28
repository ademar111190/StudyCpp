#include <android/log.h>
#include "LogUseCase.h"

void LogUseCase::d(const char* format, ...) {
    va_list args;
    va_start(args, format);
    __android_log_print(ANDROID_LOG_DEBUG, "ademar", format, args);
    va_end(args);
}
