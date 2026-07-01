/**
 *      DIESE DATEI DARF NICHT VERÄNDERT WERDEN!
 * 
 * @file CO2Messung.cpp
 * @author Dai
 * @version 1.0
 * @date 2024-07-13
 * 
 * @brief Dummy-Implementierung für die Klasse CO2Messung. 
 * @warning Diese Implementierung entspricht nicht den Erwartungen an eine Funktionale Klasse zur CO2 Messung, 
 *          sie dient nur als Platzhalter. Auch der Coding-Style entspricht nicht den Anforderungen.
 * 
 *      DIESE DATEI DARF NICHT VERÄNDERT WERDEN!
 */

#include <iostream>
#include "CO2Messung.h"

using namespace std;

/**
 * @brief unter 1000 ppm Kohlendioxid in der Raumluft als unbedenklich,
 *        Konzentrationen zwischen 1000 und 2000 ppm als auffällig und
 *        Konzentrationen über 2000 ppm als inakzeptabel
 * 
 * @param wert CO2 Konzentration in ppm
 * @return CO2Erg 0 = Unbedenklich, 1 = Auffällig, 2 = Inakzeptabel
 */
int CO2Messung::messen(int wert) {
    int erg= 0;
    if (wert <=2000 && 1000< wert) {
        erg = 1;
    } else if (wert > 2000) {
        erg = 2;
    }
    cout << "CO2 Messung Erg: " << erg << endl;
    return erg;
}