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
    if (sqlite3_open("../Database/input.db", &inputDb)) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(inputDb));
    } else {
        fprintf(stderr, "Opened database successfully\n");
        const char* query = "SELECT `id`, `name` FROM continent;";
        char* error = NULL;
        int resultCode = sqlite3_prepare_v2(inputDb, query, -1, &stmt, NULL);
        if (resultCode != SQLITE_OK) {
            fprintf(stderr, "Can't read database %d\n", resultCode);
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