//
// Created by waela on 11.06.2026.
//

#ifndef TUTORIUM_ISHAPE_H
#define TUTORIUM_ISHAPE_H



class IShape {
public:
    virtual ~IShape(){}
    //Methoden
    // Pure Virtual
    virtual int calcArea() = 0;
    virtual int calcUmfang() =0;


};



#endif //TUTORIUM_ISHAPE_H