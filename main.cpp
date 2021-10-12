#include <iostream>
#include "Carre.h"

int main() {
    Carre c=Carre();
    c.calculPerimetre();
    c.calculPerimetre(4);
    Carre c2=Carre((float)10.01);
    c2.calculPerimetre();
    return 0;
}
