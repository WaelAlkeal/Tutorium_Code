/**
 * @file Humidifier.h
 * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Header für die Klasse Humidifier
 * 
 */
#include <string>
#include <iostream>

using namespace std;
#ifndef PRUEFUNG_SS24_HUMIDIFIER_H
#define PRUEFUNG_SS24_HUMIDIFIER_H

//TODO: (Aufgabe 1a) Klasse Humidifier definieren

class Humidifier {
private:
    bool motor_on;
    bool window_closed;


public:
    ///constructor
    Humidifier(bool, bool );
    ///destructor
    ~Humidifier();  // Dai: virutal -2 Punkte

    bool befeuchten();
    bool entfeuchten();
    bool normalbetrieb();

    ///getter
    bool getMotor_on() const; // Dai: getter const -2 Punkte
    bool getWindow_closed() const;
    ///setter
    void setMotor_on(bool);   // Dai: setter brauchst du nicht. Daher nicht implementieren
    void setWindow_closed(bool);   // Dai: Information Hiding verletzt -2 Punkte

};




#endif //PRUEFUNG_SS24_HUMIDIFIER_H
