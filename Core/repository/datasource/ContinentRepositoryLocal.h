#ifndef CONTINENTREPOSITORYLOCAL_H
#define CONTINENTREPOSITORYLOCAL_H

#include <vector>

#include "Continent.h"

using namespace std;

class ContinentRepositoryLocal {

public:

    ContinentRepositoryLocal();
    virtual ~ContinentRepositoryLocal();

    vector<Continent>* getContinents();

};

#endif // ifndef CONTINENTREPOSITORYLOCAL_H
