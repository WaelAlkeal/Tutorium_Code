//
// Created by waela on 03.06.2026.
//

#include "gtest/gtest.h"
#include "SmartDeviceFSM.h"

TEST(SmartDevicefsmTS,Zustandueberdeckung) {
    SmartDevice sd;
    SmartDeviceFSM sdfsm(sd);

    sdfsm.evalTransition(1);
    //EXPECT_EQ(sdfsm.getState(),DeviceState::On);
    sdfsm.evalTransition(3);
    //EXPECT_EQ(sdfsm.getState(),DeviceState::Standby);
    sdfsm.evalTransition(1);
    //EXPECT_EQ(sdfsm.getState(),DeviceState::On);
    sdfsm.evalTransition(4);
    //EXPECT_EQ(sdfsm.getState(),DeviceState::Updating);
    sdfsm.evalTransition(6);
    EXPECT_EQ(sdfsm.getState(),DeviceState::Error);

}
TEST(SmartDevicefsmTS,Transitionueberdeckung) {
    SmartDevice sd;
    SmartDeviceFSM sdfsm(sd);

    sdfsm.evalTransition(1);
    EXPECT_EQ(sdfsm.getState(),DeviceState::On);
    sdfsm.evalTransition(2);
    EXPECT_EQ(sdfsm.getState(),DeviceState::Off);
    sdfsm.evalTransition(1);
    EXPECT_EQ(sdfsm.getState(),DeviceState::On);



}