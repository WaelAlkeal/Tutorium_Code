//
// Created by waela on 11.06.2026.
//

#include "Kreis.h"

Kreis::Kreis() {
    this->radius =10;
}

Kreis::~Kreis() {
}

int Kreis::calcArea() {
    return 3*radius*radius;
}

int Kreis::calcUmfang() {
    return 2*3*radius;
}
