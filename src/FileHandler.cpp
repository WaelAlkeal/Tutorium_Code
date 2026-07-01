/**
 * @file FileHandler.cpp
 * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Cpp-Datei für die Klasse FileHandler
 * 
 */

#include "FileHandler.h"


using namespace std;

//TODO: (Aufgabe 3) Klasse FileHandler implementieren

FileHandler::FileHandler(FILE Data ) {

    //FILE * fopen(const char * humidityTestData,const char * r );
    Data = fopen("c:\\src\\humidityTestData.txt","r");
    // Dai: macht keinen Sinn -4 Punkte

};
FileHandler::~FileHandler() {

};

bool FileHandler::readLine(int ergebnis) {  // Dai: ergebnis mit Referenz -2 Punkte
  // Dai: -13 Punkte
};
