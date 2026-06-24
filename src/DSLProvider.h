//
// Created by waela on 17.06.2026.
//

#ifndef TUTORIUM_DSLPROVIDER_H
#define TUTORIUM_DSLPROVIDER_H

#include "IInternetProvider.h"
#include <string>
using namespace std;
class DSLProvider : public IInternetProvider{
private:
    double monthlyPrice;

public:
    DSLProvider();   // Default Konstruktor
    virtual ~DSLProvider();
    double getMonthlyPrice() override;
    string getProviderName() override;
};


#endif //TUTORIUM_DSLPROVIDER_H