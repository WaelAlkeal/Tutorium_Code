/**
 * @file FileHandler.h
 * @author Dai
 * @author De Gasperis 
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Header für die Klasse FileHandler
 * 
 */

#ifndef PRUEFUNG_SS24_FILEHANDLER_H
#define PRUEFUNG_SS24_FILEHANDLER_H

#include <cstdio>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>
#include "HumidFSM.h"
#include "Humidifier.h"

//TODO: (Aufgabe 3) Klasse FileHandler definieren
class FileHandler{
private:
    FILE *file= nullptr;
public:
    FileHandler(FILE);  // Dai: FILE Pointer -2 punkte
    ~FileHandler();
    bool readLine(int ergebnis);

};



#endif //PRUEFUNG_SS24_FILEHANDLER_H
