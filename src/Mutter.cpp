//
// Created by waela on 11.06.2025.
//

#include "Mutter.h"
#include <iostream>

Mutter::Mutter() {
    this->kontoM = 5000;
    this->nameM = "Sara";
    this->statusM = true;
    this->alterM = 40;
}

Mutter::~Mutter() {
    cout << " Mutter Tot " << endl;
}

void Mutter::essen() {
    cout << "hmmm Lecker" << endl;
}

int Mutter::getAlterM() {
    return this->alterM;
}

void Mutter::setAlterM(int alter) {
    this->alterM = alter;
}
