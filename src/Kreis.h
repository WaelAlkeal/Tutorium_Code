//
// Created by waela on 11.06.2026.
//

#ifndef TUTORIUM_KREIS_H
#define TUTORIUM_KREIS_H
#include "IShape.h"


class Kreis : public IShape{
private:
    int radius;
public:
    Kreis();
    virtual ~Kreis();
    int calcArea() override;
    int calcUmfang() override;

};


#endif //TUTORIUM_KREIS_H