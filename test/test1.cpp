//
// Basisdatei zum Erstellen von Tests
//

#include "gtest/gtest.h"
#include "AirCleaner.h"
#include "FSM_AirCleaner.h"

TEST(CalcTimeTest, calcTimeTC1) {
    AirCleaner air;
    EXPECT_FLOAT_EQ(air.calcTime(50,3.0f),18.0f);
    EXPECT_FLOAT_EQ(air.calcTime(-20,4.0f), -1.0f);
    EXPECT_FLOAT_EQ(air.calcTime(20.0f,-100.0f), -1.0f);
}

TEST(CalcTimeTest, calcTimeTC2) {
    AirCleaner air(-1000);
    EXPECT_FLOAT_EQ(air.calcTime(50,3.0f),-1.0f);
    EXPECT_FLOAT_EQ(air.calcTime(-20,4.0f), -1.0f);
    EXPECT_FLOAT_EQ(air.calcTime(20.0f,-100.0f), -1.0f);
}

TEST(AirCleanerTestSuite, TC1){
    AirCleaner air;
    EXPECT_EQ(air.anschalten(10),83); // ok
}

TEST(AirCleanerTestSuite, TC2){
    AirCleaner air(700);
    EXPECT_EQ(air.anschalten(5),58); // ok
}

TEST(AirCleanerTestSuite, TC3){
    AirCleaner air(-1000);
    EXPECT_EQ(air.anschalten(10),-1);
}

TEST(AirCleanerTestSuite, TC4){
    AirCleaner air(300);
    EXPECT_EQ(air.anschalten(-5),-1);
}

TEST(AirCleanerUserTestSuite, TF1){
    AirCleaner ac;
    EXPECT_EQ(ac.anschalten(10), 83);
}

TEST(AirCleanerUserTestSuite, TF2){
    AirCleaner ac(700.0f);
    EXPECT_EQ(ac.anschalten(10), 116);
}

TEST(AirCleanerUserTestSuite, TF3){
    AirCleaner ac(-1000.0f);
    EXPECT_EQ(ac.anschalten(30), -1);
}

TEST(AirCleanerUserTestSuite, TF4){
    AirCleaner ac(300.0f);
    EXPECT_EQ(ac.anschalten(-5), -1);
}



TEST(FSMAirCleanerTestSuite, TC1) {
    AirCleaner ac(300);
    FSM_AirCleaner fsm(ac, States::IDLE);
    fsm.evaluation(4);
    fsm.evaluation(0);
    fsm.evaluation(-1);
    EXPECT_EQ((static_cast<int>(fsm.getTheState())),(static_cast<int>(States::ERROR)));
}