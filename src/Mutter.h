//
// Created by waela on 11.06.2025.
//

#ifndef MUTTER_H
#define MUTTER_H

#include <string>
using namespace std;


class Mutter {
private:
    int alterM;

protected:
    int kontoM;

public:
    string nameM;
    bool statusM;


public:
    Mutter();
    virtual ~Mutter();

    void essen();
    int getAlterM();
    void setAlterM(int alter);

};



#endif //MUTTER_H
