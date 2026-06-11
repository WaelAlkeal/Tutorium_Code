//
// Created by waela on 11.06.2026.
//

#ifndef TUTORIUM_DREIECK_H
#define TUTORIUM_DREIECK_H
#include "IShape.h"


class Dreieck : public IShape{
private:
    int hohe;
    int basis;
public:
    Dreieck();
    virtual ~Dreieck();
    int calcArea() override;
    int calcUmfang() override;
};


#endif //TUTORIUM_DREIECK_H