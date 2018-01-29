#include <iostream>

#include "sqlite3.h"

#include "ContinentRepositoryLocal.h"

using namespace std;

ContinentRepositoryLocal::ContinentRepositoryLocal() {}

ContinentRepositoryLocal::~ContinentRepositoryLocal() {}

vector<Continent>* ContinentRepositoryLocal::getContinents() {
    vector<Continent>* continents = new vector<Continent>();
    sqlite3* inputDb;
    sqlite3_stmt* stmt;
    log.d("trying to open %s\n", path.inputDatabase());
    if (sqlite3_open(path.inputDatabase(), &inputDb)) {
        log.d("Can't open database: %s\n", sqlite3_errmsg(inputDb));
    } else {
        log.d("Opened database successfully\n");
        const char* query = "SELECT `id`, `name` FROM continent;";
        char* error = NULL;
        int resultCode = sqlite3_prepare_v2(inputDb, query, -1, &stmt, NULL);
        if (resultCode != SQLITE_OK) {
            log.d("Can't read database %d\n", resultCode);
        }
        while ((resultCode = sqlite3_step(stmt)) == SQLITE_ROW) {
            Continent c = {
                (unsigned short int)sqlite3_column_int(stmt, 0),
                string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)))
            };
            continents->push_back(c);
        }
        sqlite3_close(inputDb);
    }
    return continents;
}
