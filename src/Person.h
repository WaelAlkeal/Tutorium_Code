//
// Created by waela on 29.04.2026.
//

#ifndef TUTORIUM_PERSON_H
#define TUTORIUM_PERSON_H

#include <string>
#include <Taschenrechner.h>
using namespace std;

class Person {
private:
    //Attribute
    string name;
    int alter;
    Taschenrechner& myTR;
    //Taschenrechner myTR;

public:
    //Person(); // Default oder Kopie Konstroktur
    Person(Taschenrechner& tr); //Default konsruktor
    Person(string name, int alter,Taschenrechner& tr);// Overload Konstruktor
    virtual ~Person(); // Destruktor
    // setter unf Getter nur wenn notwendig defnieren
    // setter
    void setName(string name);
    void setAlter(int alter);
    // Getter
    const string getName();
    const int getAlter();
    Taschenrechner& getTaschenrechner();
    void begruessen();

};


#endif //TUTORIUM_PERSON_H