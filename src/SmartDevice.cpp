
#include "SmartDevice.h"
#include <iostream>
using namespace std;

// Standard-Konstruktor
SmartDevice::SmartDevice() {
    name = "Unbekannt";
    status = false;
    stromverbrauch = 0.0f;
    typ = GeraeteTyp::Unbekannt;
}

// Überladener Konstruktor
SmartDevice::SmartDevice(string n, bool s, float v, GeraeteTyp t) {
    name = n;
    status = s;
    stromverbrauch = v;
    typ = t;
}

void SmartDevice::anschalten() {
    status = true;
}

void SmartDevice::ausschalten() {
    status = false;
}

void SmartDevice::anzeigen()  {
    cout << "Geraet: " << name << " (" << typToString() << ")" << endl;
    cout << "Status: " << (status ? "An" : "Aus") << endl;
    if (status) {
        cout << "Stromverbrauch: " << stromverbrauch << " W" << endl;
    }
    cout << "-----------------------------" << endl;
}

// Getter/Setter
string SmartDevice::getName()  {
    return name;
}
void SmartDevice::setName(string n) {
    name = n;
}

bool SmartDevice::getStatus()  {
    return status;
}

float SmartDevice::getVerbrauch()  {
    return stromverbrauch;
}
void SmartDevice::setVerbrauch(float v) {
    stromverbrauch = v;
}

GeraeteTyp SmartDevice::getTyp()  {
    return typ;
}
void SmartDevice::setTyp(GeraeteTyp t) {
    typ = t;
}

string SmartDevice::typToString()  {
    switch (typ) {
        case GeraeteTyp::Lampe: return "Lampe";
        case GeraeteTyp::Kamera: return "Kamera";
        case GeraeteTyp::Thermostat: return "Thermostat";
        default: return "Unbekannt";
    }
}
