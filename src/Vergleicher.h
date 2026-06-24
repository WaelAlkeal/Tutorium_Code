//
// Created by waela on 17.06.2026.
//

#ifndef TUTORIUM_VERGLEICHER_H
#define TUTORIUM_VERGLEICHER_H

#include "IInternetProvider.h"
#include <vector>

using namespace std;
class Vergleicher {
private:

    vector<IInternetProvider*> providerListe;


public:
    Vergleicher();
    virtual ~Vergleicher();
    void addProvider();
    void compare();
    void saveToFile();
    int getAnzahlProvider();
};


#endif //TUTORIUM_VERGLEICHER_H