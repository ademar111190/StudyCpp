#include <vector>

#include "Continent.h"
#include "ContinentsView.h"
#include "GetContinentsUseCase.h"
#include "LogContract.h"

using namespace std;

class ContinentsPresenter {

private:

    LogContract log;
    GetContinentsUseCase getContinents;
    ContinentsView* view;

public:

    ContinentsPresenter();
    ~ContinentsPresenter();

    void attachView(ContinentsView* view);
    void start();

};
