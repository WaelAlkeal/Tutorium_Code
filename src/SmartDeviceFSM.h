//
// Created by waela on 28.05.2026.
//

#ifndef TUTORIUM_SMARTDEVICEFSM_H
#define TUTORIUM_SMARTDEVICEFSM_H

#include "SmartDevice.h"
#include <iostream>


enum class DeviceState {
    Off,
    On,
    Standby,
    Updating,
    Error
};

class SmartDeviceFSM {
private:
    DeviceState currentState;
    SmartDevice& device;

public:
    SmartDeviceFSM(SmartDevice& s);
    virtual ~SmartDeviceFSM();

    void evalState();
    DeviceState evalTransition(int input);
    DeviceState getState();
    string getStateAlsString();
};


#endif //TUTORIUM_SMARTDEVICEFSM_H