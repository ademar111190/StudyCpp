#ifndef LOGCONTRACT_H
#define LOGCONTRACT_H

#include <iostream>
#include <stdarg.h>

class LogContract {

public:

    void d(const char* format, ...);

};

#endif // ifndef LOGCONTRACT_H
