#ifndef IINTERNETPROVIDER_H
#define IINTERNETPROVIDER_H

#include <string>
using namespace std;
class IInternetProvider
{
public:
    virtual ~IInternetProvider() {};
    virtual double getMonthlyPrice() = 0;
    virtual string getProviderName() = 0;


};

#endif