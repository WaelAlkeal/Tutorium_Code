//
// Created by waela on 28.05.2026.
//

#include "SmartDeviceFSM.h"
using namespace std;

SmartDeviceFSM::SmartDeviceFSM(SmartDevice& s) : device(s) {
    currentState = DeviceState::Off;
}

SmartDeviceFSM::~SmartDeviceFSM() {
}

DeviceState SmartDeviceFSM::getState() {
    return currentState;
}

string SmartDeviceFSM::getStateAlsString() {
    switch (currentState) {
        case DeviceState::Off:
            return "Off";

        case DeviceState::On:
            return "On";

        case DeviceState::Standby:
            return "Standby";

        case DeviceState::Updating:
            return "Updating";

        case DeviceState::Error:
            return "Error";

        default:
            return "Unknown";
    }
}

void SmartDeviceFSM::evalState() {

    switch (currentState) {
        case DeviceState::Off:

        break;
        case DeviceState::On:

        break;
        case DeviceState::Standby:

        break;
        case DeviceState::Updating:

        break;
        case DeviceState::Error:

        break;
    }

}

DeviceState SmartDeviceFSM::evalTransition(int input) {
    // ----------- 1. Transitionen ------------------
    DeviceState nextState = currentState;

    switch (currentState) {
        case DeviceState::Off:
            if (input == 1) {
                nextState = DeviceState::On;
            }
        break;
        case DeviceState::On:
            if (input == 2){
        nextState = DeviceState::Off;
            }else if (input == 3) {
                nextState = DeviceState::Standby;
            }else if (input == 4) {
                nextState = DeviceState::Updating;
            }
            break;
        case DeviceState::Standby:
            if (input == 1) {
                nextState = DeviceState::On;
            }
            else if (input == 2) {
                nextState = DeviceState::Off;
            }
            break;
        case DeviceState::Updating:
            if (input == 5) {
                nextState = DeviceState::On;
            }else if (input == 6){
                nextState = DeviceState::Error;
            }
            break;
        case DeviceState::Error:
            nextState = DeviceState::Off;
            break;
    }

    // ----------- 2. Exit-Actions ------------------
    if (nextState != currentState) {
        switch (currentState) {
            case DeviceState::Off:
            break;
            case DeviceState::On:
            break;
            case DeviceState::Standby:
            break;
            case DeviceState::Updating:
            break;
            case DeviceState::Error:
            break;
            default:
                break;
        }
    }

    // ----------- 3. Entry-Actions -----------------
    if (nextState != currentState) {
        switch (nextState) {
            case DeviceState::Off:
                break;
            case DeviceState::On:
                break;
            case DeviceState::Standby:
                break;
            case DeviceState::Updating:
                break;
            case DeviceState::Error:
                break;
        }

        currentState = nextState;
    }

    return currentState;
}