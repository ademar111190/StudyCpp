#include "ContinentsView.h"

using namespace std;

class UnixContinentsView : public ContinentsView {

public:

    virtual void showLoading();
    virtual void showRetry();
    virtual void showContent();
    virtual void showError(string message);

    virtual void clearContinents();
    virtual void bindContinent(Continent continent);

};
