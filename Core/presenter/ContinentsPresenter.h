#include <vector>

#include "Continent.h"
#include "ContinentsView.h"
#include "GetContinentsUseCase.h"
#include "LogUseCase.h"

using namespace std;

class ContinentsPresenter {

private:

    LogUseCase log;
    GetContinentsUseCase getContinents;
    ContinentsView* view;

public:

    ContinentsPresenter();
    ~ContinentsPresenter();

    void attachView(ContinentsView* view);
    void start();

};
