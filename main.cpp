
#include <iostream>
#include <string>
// TODO: Ihre Klassen einbinden
#include "HumidFSM.h"
#include "Humidifier.h"
#include "AreaMonitor.h"
#include "FileHandler.h"

#define HumidFSM_INPUT_1 30
#define HumidFSM_INPUT_2 50
#define CO2FSM_INPUT_1 1000
#define CO2FSM_INPUT_2 2050

using namespace std;


void run_fileHandler() {
    // TODO: (Aufgabe 3c) Ablauf mit Filehandler implementieren

}


void run_monitor() {
    // TODO: (Aufgabe 4c) Ablauf des Monitoring implementieren

}

int main() {
    cout << "Viel Erfolg bei der Pruefung!" << std::endl << std::endl;
    // Hier dürfen auch eigene Aufrufe ergänzt werden.

    //run_fileHandler(); // Aufgabe 3c darf für Aufgabe 4c auskommentiert werden
    run_monitor(); // Aufgabe 4c darf für Aufgabe 3c auskommentiert werden

    return 0;
}
