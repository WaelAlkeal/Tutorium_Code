//
// Created by waela on 11.06.2025.
//

#include "Vater.h"
#include <iostream>
Vater::Vater() {
    this->alterV=50;
    this->nameV = "Ahmad";
    this->wagen = 'B';
    this->kontoV = 100000;
}

Vater::~Vater() {
    cout << " Vater Tot " << endl;
}

int Vater::getAlterV() {
    return this->alterV;
}

string Vater::getNameV() {
    return this->nameV;
}

void Vater::setAlterV(int alter) {
    this->alterV = alter;
}

void Vater::setnameV(string name) {
    this->nameV = name;
}
