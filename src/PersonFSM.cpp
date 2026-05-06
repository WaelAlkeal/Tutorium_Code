//
// Created by waela on 06.05.2026.
//

#include "PersonFSM.h"

PersonFSM::PersonFSM(Person& person) : myPerson(person){
    this->currentState = State::HAPPY;

}

PersonFSM::~PersonFSM() {
}

int PersonFSM::evalTransitions(int eingabe) {
    State nextState = currentState;
    int system = 1;
    //Transition
    switch (currentState) {
        case State::HAPPY:
            if (eingabe == 2) {
                nextState = State::SAD;
            }
            if (eingabe == 5) {
                nextState = State::ANGRY;
            }
            if (eingabe == 3) {
                nextState = State::EXCITED;
            }
            break;
        case State::SAD:
            if (eingabe == 1) {
            nextState = State::HAPPY;
            }
            break;
        case State::ANGRY:
            if (eingabe == 6) {
                nextState = State::HAPPY;
            }
            if (eingabe == 7) {
                system =0;
            }
            break;
        case State::EXCITED:
            if (eingabe == 4) {
                nextState = State::ANGRY;
            }
            break;
        default:
            break;

    }
    if (currentState != nextState) {
        //Exit
        switch (currentState) {
            case State::HAPPY:

                break;
            case State::SAD:

                break;
            case State::ANGRY:

                break;
            case State::EXCITED:

                break;
            default:
                break;
        }
        //Entry
        switch (nextState) {
            case State::HAPPY:

                break;
            case State::SAD:

                break;
            case State::ANGRY:

                break;
            case State::EXCITED:

                break;
            default:
                break;
        }
        currentState = nextState;
    }
return system;
}

void PersonFSM::evalState() {
    //Do
    switch (currentState) {
        case State::HAPPY:

            break;
        case State::SAD:

            break;
        case State::ANGRY:

            break;
        case State::EXCITED:

            break;
            default:
            break;
    }
}

const State PersonFSM::getState() {
    return currentState;
}

string PersonFSM::getStateAlsString() {
    string zustand;
    switch (currentState) {
        case State::HAPPY:
            zustand = "Happy";
            break;
        case State::ANGRY:
            zustand = "Angry";
            break;
        case State::SAD:
            zustand = "Sad";
            break;
        case State::EXCITED:
                zustand = " Excited";
            break;
            default:
            break;

    }
    return zustand;
}
