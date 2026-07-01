/**
 * @file HumidFSM.h
 * @author Dai
 * @author De Gasperis
 * @version 1.0
 * @date 2024-07-13
 *
 * @brief Header für die Klasse HumidFSM
 *
 */

#include <string>
#include <iostream>
#include"Humidifier.h"
#include "IDispatcher.h"


#ifndef PRUEFUNG_SS24_HUMIDFSM_H
#define PRUEFUNG_SS24_HUMIDFSM_H


// TODO: (Aufgabe 2a) humidStates implementieren
enum class HumidStates{
    IDLE,
    ENTFEUCHTEND,
    BEFEUCHTEND,
};

//TODO: (Aufgabe 2b) Klasse HumidFSM definieren
class HumidFSM : IDispatcher{  ///:iDISPATCHER; I WROTE IT FOR THE 4 EXERCICE
private:
    Humidifier theHumidifier;  // Dai: REferenz -2 Punkte
    HumidStates theState;
    void evalTransition(int);
    void evalStates();

public:
    ///constructor
    HumidFSM(HumidStates, Humidifier theHumidifier);
    ///destructor
    ~HumidFSM();

    void  evaluation(int);

    ///getter
    Humidifier getTheHumidifier() const;
    HumidStates getTheState() const;

    ///setter
    void setTheHumidifier(Humidifier);  // Dai: bitte nicht ueberall Setter implemeniteren.
    void setTheState(HumidStates);
};


//TODO: (Aufgabe 4c) Klasse HumidFSM zur Provided-Klasse machen

#endif //PRUEFUNG_SS24_HUMIDFSM_H
