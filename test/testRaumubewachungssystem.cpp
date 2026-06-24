/**
* @file testRaumueberwachungssystem.cpp
 * @author Dai
 * @author De Gasperis
 * @version 1.0
 * @date 2024-07-13
 *
 * @brief Cpp-Datei für die Tests des Raumüberwachungssystems
 *
 */


#include "gtest/gtest.h"
#include <Humidifier.h>
#include "HumidFSM.h"
//TODO: Eigene zu testende Klassen einbinden


// Achtung: diese Tests nicht verändern!
//Dai: die Tests funktionieren nicht. -5 Punkte
TEST(Humidifier_TS, HumidifierTest1) {
    Humidifier myHum;
    EXPECT_EQ(myHum.getMotorStatus(), false);  // Motor ist aus
}

TEST(Humidifier_TS, HumidifierTest2) {
    Humidifier myHum;
    EXPECT_EQ(myHum.befeuchten(), true); // Motor ist an
}


// TODO: (Aufgabe 1c) Bitte hier den Test für die Methode entfeuchten() einfügen
//Dai: -10 Punkte

// TODO: (Aufgabe 2c) Bitte hier dem FSM-Tests einfügen
//Dai: -15 Punkte

