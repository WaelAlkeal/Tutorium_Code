//
// Created by waela on 29.04.2026.
//

#ifndef TUTORIUM_TASCHENRECHNER_H
#define TUTORIUM_TASCHENRECHNER_H


class Taschenrechner {
private:
int serialNr;
public:
    Taschenrechner();
    virtual ~Taschenrechner();

    void add(int zahl1 ,int zahl2);
    void setSerialNr(int nr);
    void zeigeSerialNr();
};


#endif //TUTORIUM_TASCHENRECHNER_H