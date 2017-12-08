#include <vector>

#include "continent.h"
#include "ContinentRepository.h"

using namespace std;

class GetContinentsUseCase {

private:

    ContinentRepository continentRepository;

public:

    GetContinentsUseCase();
    virtual ~GetContinentsUseCase();

    vector<Continent> execute();

};
