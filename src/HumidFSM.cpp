/**
 * @file HumidFSM.cpp
 * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Cpp-Datei für die Klasse HumidFSM
 * 
 */

#include <iostream>
#include "HumidFSM.h"
#define MAX 60
#define MIN 40

using namespace std;

//TODO: (Aufgabe 2b) Klasse HumidFSM implementieren

HumidFSM::HumidFSM(HumidStates State,Humidifier theHumidifier) : theHumidifier(theHumidifier) {
    this->theState=HumidStates::IDLE;

};

HumidFSM::~HumidFSM() {

};

void HumidFSM::evalTransition(int current_humidity) {

    switch (this->theState) {
        ///idle
        case HumidStates::IDLE:
            if (current_humidity > MAX) {
                this->theState= HumidStates::ENTFEUCHTEND;
                cout<<"entfeuchten"<<endl;
            }
            else if (current_humidity < MIN) {
                this->theState = HumidStates::BEFEUCHTEND;
                cout<<"befeuchten"<<endl;
            }
            else{
                this->theState= HumidStates::IDLE;
                // Dai: Self-Transition nicht da! -2 Punkte
            }
        break;
          ///entfeuchtend
        case HumidStates::ENTFEUCHTEND:
            if (current_humidity <= MAX) {
                this->theState= HumidStates::IDLE;
                cout<<"NORMAL"<<endl;
            }
            else{
                this->theState= HumidStates::ENTFEUCHTEND;
            }
            break;

            ///befeuchtend
        case HumidStates::BEFEUCHTEND:
            if (current_humidity >= MIN) {
                this->theState= HumidStates::IDLE;
                cout<<"NORMAL"<<endl;
            }
            else{
                this->theState= HumidStates::BEFEUCHTEND;
            }
            break;
    }  // Dai: kein Default -2 PUnkte

};


void  HumidFSM::evalStates() {

    switch (this->theState) {
        case HumidStates::IDLE:
            theHumidifier.normalbetrieb();
            break;

        case HumidStates::ENTFEUCHTEND:
            theHumidifier.entfeuchten();
            break;

        case HumidStates::BEFEUCHTEND:
            theHumidifier.befeuchten();
            break;
    }

};


void HumidFSM::evaluation(int current_humidity) {
    this->evalTransition(current_humidity);
    this->evalStates();
};

