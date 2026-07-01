/**
 * @file Humidifier.cpp
  * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Cpp-Datei für die Klasse Humidifier
 * 
 */

#include"Humidifier.h"
#include <iostream>

using namespace std;

//TODO: (Aufgabe 1a) Klasse Humidifier implementieren

#include "Humidifier.h"

///constructor
Humidifier::Humidifier(bool Motor , bool Window ) {
  // Dai: macht leider keinen Sinn, was du hier implementiert hast -3 Punkte
    Motor=true;        /// Motor is working
    Window= true;     ///  window is closed
    this->motor_on=Motor;
    this->window_closed=Window;

};
///destructor
Humidifier::~Humidifier() {

};
///getter
bool Humidifier::getMotor_on() const {
    return this-> motor_on;
};

bool Humidifier::getWindow_closed() const {
    return this->window_closed;
};

///setter
void Humidifier::setMotor_on(bool check) {
    this->motor_on=check;

};

void Humidifier::setWindow_closed(bool check) {
    this->window_closed=check;


};



///normalbetrieb
bool Humidifier::normalbetrieb() {
    /// bool check= true;
    if(normalbetrieb()){  // Dai: warum das? das funktioniert so auch nicht.
        // Du hast eine Rekursion drin. normalbetrieb ruft normalbetrieb auf. -5 Punkte ff.
        this->motor_on=false;
        this->window_closed=true;
        cout<<"Raum ok"<<endl;

    }
    else{
        cout<<"check again"<<endl;
    }
    return motor_on;
};


///befeuchten
bool Humidifier::befeuchten() {
    bool check=true;
    if(befeuchten()==check){
        this->motor_on=true;
        this->window_closed=true;
        cout<<"Raum wird befeuchtet"<<endl;

    }
    else{
        cout<<"check again"<<endl;
    }
    return motor_on;

};


///entfeuchten
bool Humidifier::entfeuchten() {
    bool check=true;
    if(entfeuchten()==check){
        this->motor_on= false;
        this->window_closed=false;
        cout<<"Raum wird entfeuchtet"<<endl;

    }
    else{
        cout<<"check again"<<endl;
    }
    return motor_on;

};

