/**
 * @file CO2FSM.h
 * @author Dai
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Dummy-Implementierung für die Klasse CO2FSM. 
 * @warning Diese Implementierung entspricht nicht den Erwartungen an eine FSM-Klasse, 
 *          sie dient nur als Platzhalter. 
 */
 
#ifndef PRUEFUNG_SS24_CO2FSM_H
#define PRUEFUNG_SS24_CO2FSM_H

#include "CO2Messung.h"
#include <IDispatcher.h>

//TODO: (Aufgabe 4c) Notwendige Anpassungen zur Umwandlung von CO2FSM in eine Provider-Klasse.

class CO2FSM : public IDispatcher{
private:
    CO2Messung co2;
public:
    CO2FSM(CO2Messung);
    virtual ~CO2FSM();
    void evaluation(int);
};



#endif //PRUEFUNG_SS24_CO2FSM_H
