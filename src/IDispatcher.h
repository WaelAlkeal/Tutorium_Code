//
// Created by mt2pr2326 on 16.07.2024.
//
#include <string>
#include <iostream>

#ifndef PRUEFUNG_SS24_IDISPATCHER_H
#define PRUEFUNG_SS24_IDISPATCHER_H

class IDispatcher{
public:
    virtual ~IDispatcher(){};
    virtual void evaluation(int)=0;


};
#endif //PRUEFUNG_SS24_IDISPATCHER_H
