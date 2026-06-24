#ifndef SOHN_H
#define SOHN_H
#include "Mutter.h"
#include "Vater.h"


class Sohn : public Mutter , public Vater{
private:
    int height;

public:

    Sohn();
    virtual ~Sohn();

    void schreien();
    int getKonto();
    void setKonto(int konto);


};



#endif //SOHN_HH