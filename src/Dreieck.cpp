//
// Created by waela on 11.06.2026.
//

#include "Dreieck.h"

Dreieck::Dreieck() {
    hohe = 1;
    basis = 2;
}

Dreieck::~Dreieck() {
}

int Dreieck::calcArea() {
    return (hohe*basis) /2;
}

int Dreieck::calcUmfang() {
    return 0;
}
