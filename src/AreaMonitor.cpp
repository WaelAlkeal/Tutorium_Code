/**
 * @file AreaMonitor.cpp
 * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Cpp-Datei für die Klasse AreaMonitor
 */

#include <iostream>
#include "AreaMonitor.h"

using namespace std;

//TODO: (Aufgabe 4b) Klasse AreaMinitor implementieren

AreaMonitor::AreaMonitor() {
    int current_humidity;
  dispatch->evaluation(current_humidity );  // Dai: wozu? -2 Punkte
};

AreaMonitor::~AreaMonitor() noexcept {

};

void AreaMonitor::monitoring(int current_humidity) {

};

void AreaMonitor::setMonitor(IDispatcher &evalution ) {
    evalution.evaluation();  // Dai: was ist das?
    // i couldnt finish it
};
