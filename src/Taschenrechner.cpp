//
// Created by waela on 29.04.2026.
//

#include "Taschenrechner.h"
#include <iostream>
using namespace std;

Taschenrechner::Taschenrechner() {
    serialNr= 123456789;
}

Taschenrechner::~Taschenrechner() {
}

void Taschenrechner::add(int zahl1, int zahl2) {
    cout << zahl1 << " + " << zahl2 << " = "<< zahl1 + zahl2 << endl;
}

void Taschenrechner::setSerialNr(int nr) {
    this->serialNr = nr;
}

void Taschenrechner::zeigeSerialNr() {
    cout << "SerialNr ist : " << this->serialNr << endl;
}
