
#include <iostream>
#include "IShape.h"
#include "Kreis.h"
#include "Dreieck.h"
#include "Rechteck.h"
#include <vector>
using namespace std;

int main() {
    IShape* s;
    Kreis kreis;
    Rechteck rechteck;
    Dreieck dreieck;
    s =&kreis;
    cout << "Flaeche ist "<< s->calcArea()<< endl;
    cout << "Umfang ist "<< s->calcUmfang()<< endl;
    s=&rechteck;
    cout << "Flaeche ist "<< s->calcArea()<< endl;
    cout << "Umfang ist "<< s->calcUmfang()<< endl;
    s=&dreieck;
    cout << "Flaeche ist "<< s->calcArea()<< endl;
    cout << "Umfang ist "<< s->calcUmfang()<< endl;

    IShape* ptr = new(Kreis);
    cout << "Flaeche ist "<< ptr->calcArea()<< endl;
    ptr =&rechteck;
    cout << "Flaeche ist "<< ptr->calcArea()<< endl;
    delete ptr;
    delete s;

    return 0;
}
