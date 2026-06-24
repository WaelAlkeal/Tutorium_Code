//
// Created by waela on 17.06.2026.
//

#include "FiberProvider.h"
#include <random>


FiberProvider::FiberProvider()
{
    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> dist(40, 150);


    monthlyPrice = dist(gen);

    //srand(time(nullptr));
    //monthlyPrice = 20 + rand() % 81;

}


FiberProvider::~FiberProvider() {
}


double FiberProvider::getMonthlyPrice()
{
    return monthlyPrice;
}


string FiberProvider::getProviderName()
{
    return "Fiber Provider";
}