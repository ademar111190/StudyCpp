#ifndef CONTINENTSVIEW_H
#define CONTINENTSVIEW_H

#include <string>

#include "Continent.h"

using namespace std;

class ContinentsView {

public:

    virtual void showLoading() = 0;
    virtual void showRetry() = 0;
    virtual void showContent() = 0;
    virtual void showError(string message) = 0;

    virtual void clearContinents() = 0;
    virtual void bindContinent(Continent continent) = 0;

};

#endif // ifndef CONTINENTSVIEW_H
