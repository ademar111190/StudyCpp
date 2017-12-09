#include <vector>

#include "Continent.h"
#include "ContinentsView.h"
#include "GetContinentsUseCase.h"

using namespace std;

class ContinentsPresenter {

private:

    GetContinentsUseCase getContinents;
    ContinentsView* view;

public:

    ContinentsPresenter();
    ~ContinentsPresenter();

    void attachView(ContinentsView* view);
    void start();

};
