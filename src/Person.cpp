//
// Created by waela on 29.04.2026.
//

#include "Person.h"
#include <iostream>

/*Person::Person() {
    name = "Peter";
    alter = 0;
}*/

Person::Person(Taschenrechner& tr) : myTR(tr) {
    name = "Peter";
    alter = 0;
}

Person::Person(string name, int alter, Taschenrechner& tr) :myTR(tr) {
    this->name = name;
    this->alter =alter;
}



Person::~Person() {
    cout << " Bye ich bin weg"<< endl;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAlter(int alter) {
    this->alter = alter;
}

const string Person::getName() {
    return name;
}

const int Person::getAlter() {
    return alter;
}

Taschenrechner & Person::getTaschenrechner() {
    return myTR;
}

void Person::begruessen() {
    cout << "Hallo mein Name ist " << name << endl;
}
