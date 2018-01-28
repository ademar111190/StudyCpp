#include "ContinentsView.h"
#include "LogUseCase.h"

using namespace std;

class UnixContinentsView : public ContinentsView {

private:

    LogUseCase log;

public:

    virtual void showLoading();
    virtual void showRetry();
    virtual void showContent();
    virtual void showError(string message);

    virtual void clearContinents();
    virtual void bindContinent(Continent continent);

};
