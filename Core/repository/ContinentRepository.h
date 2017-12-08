#include <vector>

#include "continent.h"
#include "ContinentRepositoryCache.h"

using namespace std;

class ContinentRepository {

public:

    ContinentRepository();
    virtual ~ContinentRepository();

    vector<Continent> getContinents();

};
