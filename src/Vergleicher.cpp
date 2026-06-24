//
// Created by waela on 17.06.2026.
//

#include "Vergleicher.h"
#include <iostream>
#include "DSLProvider.h"
#include "FiberProvider.h"
#include <fstream>
#include <random>



Vergleicher::Vergleicher() {
    providerListe.clear();
}

Vergleicher::~Vergleicher() {
    for(auto provider : providerListe)
    {

        delete provider;

    }


    providerListe.clear();
}

void Vergleicher::addProvider()
{
    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> dist(0, 1);


    int zufall = dist(gen);


    if(zufall == 0)
    {
        providerListe.push_back(new DSLProvider());
    }
    else
    {
        providerListe.push_back(new FiberProvider());
    }
}



void Vergleicher::compare()
{

    for(auto provider : providerListe)
    {

        cout
        << provider->getProviderName()
        << " kostet "
        << provider->getMonthlyPrice()
        << " Euro/Monat"
        << endl;

    }

}



void Vergleicher::saveToFile()
{

    ofstream file("../Data/anbieter.csv");
    if(!file)
    {
        cout << "Datei konnte nicht geöffnet werden";
        return;
    }
    // Kopfzeile
    file
    << "Anbieter;Preis;Einheit"
    << endl;

    for(auto provider : providerListe)
    {

        file
        << provider->getProviderName()
        << ";"
        << provider->getMonthlyPrice()
        << ";"
        << "Euro"
        << endl; //<< "\n"

    }


    file.close();

}
int Vergleicher::getAnzahlProvider()
{

    return providerListe.size();

}