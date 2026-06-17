
#include <iostream>

#include "Vergleicher.h"
#define ANZAHL_PROVIDER 50
using namespace std;

int main() {

    Vergleicher v;

    //IInternetProvider* dsl1 = new DSLProvider(); //bei new am ende Delete
    //v.addProvider(dsl1);
    //DSLProvider dsl;
    //IInternetProvider* dsl2 = &dsl;
    //v.addProvider(dsl2);

    for (int i = 0; i< ANZAHL_PROVIDER ; ++i) {
            v.addProvider();
    }
    v.compare();
    cout<< "Anzahl Anbieter: "<< v.getAnzahlProvider()<< endl;
    v.saveToFile();
    return 0;
}
