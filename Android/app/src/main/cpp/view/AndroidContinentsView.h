#include <jni.h>
#include "ContinentsView.h"
#include "LogContract.h"

using namespace std;

class AndroidContinentsView : public ContinentsView {

private:

    jobject thiz;
    LogContract log;

public:

    AndroidContinentsView(jobject);

    ~AndroidContinentsView();

    virtual void showLoading();
    virtual void showRetry();
    virtual void showContent();
    virtual void showError(string message);

    virtual void clearContinents();
    virtual void bindContinent(Continent continent);

};
