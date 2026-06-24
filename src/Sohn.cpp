//
// Created by waela on 11.06.2025.
//

#include "Sohn.h"
#include <iostream>
Sohn::Sohn() {
    // neue Attribut nur für Sohn
    this->height = 1;

    // von Mutter
    this->nameM= "Hasan";// public Attribute dierekter zugriff auch ohne Vererbung
    this->statusM = false;
    this->kontoM = 0; // Protected Attribut dierekter zugriff
    setAlterM(4);// private Attribut kein zugriff nur über set oder get
    getAlterM();
    // von Vater
    this->kontoV = 11; //Protected
    setAlterV(22); // private
    setnameV("SSSSS");// private
    // Wagen kann nicht darauf zugreiffen



}

Sohn::~Sohn() {
    cout << " Sohn Tot " << endl;

}

void Sohn::schreien() {
    cout << " WAAAAAAAAAAAAAAAAAAA" << endl;

}

int Sohn::getKonto() {
    return this->kontoV;
}

void Sohn::setKonto(int konto) {
    this->kontoV = konto;
}
