//
// Created by waela on 11.06.2026.
//

#include "Rechteck.h"

Rechteck::Rechteck() {
    laenge = 2;
    breite =2;
}

Rechteck::~Rechteck() {
}

void Rechteck::setLaenge(int l) {
    this->laenge = l;

}

void Rechteck::setBreite(int b) {
    this->breite = b;
}

int Rechteck::calcArea() {

    return laenge * breite;
}

int Rechteck::calcUmfang() {
    return (2*laenge) + (2*breite);
}
