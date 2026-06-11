//
// Created by waela on 11.06.2026.
//

#ifndef TUTORIUM_RECHTECK_H
#define TUTORIUM_RECHTECK_H
#include "IShape.h"


class Rechteck : public IShape{
private:
    int laenge;
    int breite;
public:
    Rechteck();
    virtual ~Rechteck();
    void setLaenge(int l);
    void setBreite(int b);

    int calcArea() override;
    int calcUmfang() override;
};


#endif //TUTORIUM_RECHTECK_H