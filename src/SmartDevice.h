
#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>
using namespace std;

enum class GeraeteTyp {
    Lampe,//Lampe= 'L',
    Kamera,
    Thermostat,
    Unbekannt
};

class SmartDevice {
private:
    string name;
    bool status;
    float stromverbrauch;
    GeraeteTyp typ;

public:
    SmartDevice(); // Standard-Konstruktor
    SmartDevice(string n, bool s, float v, GeraeteTyp t); // Überladener Konstruktor

    void anschalten();
    void ausschalten();
    void anzeigen() ;

    // Getter/Setter
    string getName() ;
    void setName(string n);
    float getVerbrauch() ;
    void setVerbrauch(float v);
    GeraeteTyp getTyp() ;
    void setTyp(GeraeteTyp t);
    bool getStatus() ;

    string typToString() ;
};

#endif