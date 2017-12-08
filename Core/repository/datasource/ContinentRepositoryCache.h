#ifndef CONTINENTREPOSITORYCACHE_H
#define CONTINENTREPOSITORYCACHE_H

#include <vector>

#include "Continent.h"

using namespace std;

class ContinentRepositoryCache {

private:

    ContinentRepositoryCache() {}

public:

    vector<Continent> *continents;

    static ContinentRepositoryCache& getInstance() {
        static ContinentRepositoryCache instance;

        return instance;
    }

    ContinentRepositoryCache(ContinentRepositoryCache const&) = delete;
    void operator=(ContinentRepositoryCache const&) = delete;

};

#endif // ifndef CONTINENTREPOSITORYCACHE_H
