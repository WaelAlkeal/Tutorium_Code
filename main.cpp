
#include <iostream>
#include  <Person.h>

int main() {
    Taschenrechner t1;
    Person p1(t1);
    p1.begruessen(); // Default konstruktor
    Person p2("Wael", 20,t1);//Overload Konstruktor
    p2.begruessen();

    p2.getTaschenrechner().add(1,2);
    p1.getTaschenrechner().zeigeSerialNr();
    p2.getTaschenrechner().setSerialNr(66666);
    p1.getTaschenrechner().zeigeSerialNr();
    p2.getTaschenrechner().zeigeSerialNr();
    return 0;
}
