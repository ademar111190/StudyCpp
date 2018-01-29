#include "LogContract.h"

void LogContract::d(const char* format, ...) {
    va_list args;
    va_start(args, format);
    fprintf(stderr, format, args);
    va_end(args);
}
