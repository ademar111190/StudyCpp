#include <iostream>

#include "ContinentRepository.h"

using namespace std;

int main(int argc, char const* argv[]) {
    ContinentRepository repository = ContinentRepository();
    vector<Continent> continents = repository.getContinents();
    fprintf(stderr, "We have %lu continents\n", continents.size());
    for (auto& continent : continents) {
        fprintf(stderr, "Continent id: %d name: %s\n", continent.id, continent.name.c_str());
    }
    return 0;
}
