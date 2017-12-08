#include <vector>

#include "Continent.h"
#include "ContinentRepositoryCache.h"
#include "ContinentRepositoryLocal.h"

using namespace std;

class ContinentRepository {

private:

    ContinentRepositoryLocal local;

public:

    ContinentRepository();
    virtual ~ContinentRepository();

    vector<Continent> getContinents();

};
