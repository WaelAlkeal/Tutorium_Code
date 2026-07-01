/**
 * @file CO2FSM.cpp
 * @author Dai
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Dummy-Implementierung für die Klasse CO2FSM. 
 * @warning Diese Implementierung entspricht nicht den Erwartungen an eine FSM-Klasse, 
 *          sie dient nur als Platzhalter. 
 */

#include "CO2FSM.h"
#include<iostream>


using namespace std;

//TODO: (Aufgabe c) ggf notwendige Anpassungen zur Umwandlung von CO2FSM in eine Provider-Klasse.

CO2FSM::CO2FSM(CO2Messung ) {


};


void CO2FSM::evaluation(int befehl) {
    this->co2.messen(befehl);
    cout << "CO2FSM aufgerufen! " << endl;

}