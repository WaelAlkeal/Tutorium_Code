//
// Created by waela on 17.06.2026.
//

#ifndef TUTORIUM_FIBERPROVIDER_H
#define TUTORIUM_FIBERPROVIDER_H

#include "IInternetProvider.h"
#include <string>
using namespace std;
class FiberProvider : public IInternetProvider{
private:
    double monthlyPrice;

public:
    FiberProvider();
    virtual ~FiberProvider();
    double getMonthlyPrice() override;
    string getProviderName() override;
};


#endif //TUTORIUM_FIBERPROVIDER_H