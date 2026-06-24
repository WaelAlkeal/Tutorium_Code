//
// Created by waela on 11.06.2025.
//

#ifndef VATER_H
#define VATER_H

#include <string>
using namespace std;

class Vater {
private:
    int alterV;
    string nameV;
    char wagen;
protected:
    int kontoV;
public:
    Vater();
    virtual~Vater();

    int getAlterV();
    string getNameV();

    void setAlterV(int alter);
    void setnameV(string name);


};



#endif //VATER_H
