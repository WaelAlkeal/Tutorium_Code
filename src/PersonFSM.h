//
// Created by waela on 06.05.2026.
//

#ifndef TUTORIUM_PERSONFSM_H
#define TUTORIUM_PERSONFSM_H

#include "Person.h"

enum class State {HAPPY,SAD,EXCITED,ANGRY,END};

class PersonFSM {
private:
    State currentState;
    Person& myPerson;

public:
    PersonFSM(Person& person);
    virtual ~PersonFSM();

    int evalTransitions(int eingabe);
    void evalState();
    const State getState();
    string getStateAlsString();

};


#endif //TUTORIUM_PERSONFSM_H