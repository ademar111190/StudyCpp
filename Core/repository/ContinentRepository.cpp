#include "ContinentRepository.h"

using namespace std;

ContinentRepository::ContinentRepository() {}

ContinentRepository::~ContinentRepository() {}

vector<Continent> ContinentRepository::getContinents() {
    ContinentRepositoryCache& cache = ContinentRepositoryCache::getInstance();
    if (cache.continents == NULL) {
        cache.continents = new vector<Continent> ();
        Continent c = { 1, "azul" };
        cache.continents->push_back(c);
    }
    return *cache.continents;
}
