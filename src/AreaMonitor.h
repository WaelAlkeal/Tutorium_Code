/**
 * @file AreaMonitor.h
 * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Header für die Klasse AreaMonitor
 */
#ifndef PRUEFUNG_SS24_AREAMONITOR_H
#define PRUEFUNG_SS24_AREAMONITOR_H

//TODO: benötigte Header einbinden
#include "IDispatcher.h"
#include "CO2FSM.h"
#include "HumidFSM.h"

//TODO: (Aufgabe 4b) Klasse AreaMinitor definieren
class AreaMonitor{
private:
    IDispatcher *dispatch;
public:
    AreaMonitor();
    ~AreaMonitor();
    void setMonitor(IDispatcher&);
    void monitoring(int);
};


#endif //PRUEFUNG_SS24_AREAMONITOR_H
