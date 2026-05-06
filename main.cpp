
#include <iostream>
#include  <Person.h>
#include "PersonFSM.h"
int main() {
    Taschenrechner t1;
    Person p1(t1);
    PersonFSM pfsm(p1);

    cout << "State ist :" << pfsm.getStateAlsString()<< endl;
    int eingabe=0;
    int system =1;

    while (system) {
        cin >> eingabe;
        system = pfsm.evalTransitions(eingabe);
        pfsm.evalState();
        cout << "State ist :" << pfsm.getStateAlsString()<< endl;
    }

    return 0;
}
