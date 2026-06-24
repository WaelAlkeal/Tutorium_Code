//
// Created by waela on 17.06.2026.
//

#include "DSLProvider.h"
#include <random>

DSLProvider::DSLProvider()
{
    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> dist(20, 100);


    monthlyPrice = dist(gen);

}


DSLProvider::~DSLProvider() {
}

double DSLProvider::getMonthlyPrice()
{
    return monthlyPrice;
}

string DSLProvider::getProviderName()
{
    return "DSL Provider";
}