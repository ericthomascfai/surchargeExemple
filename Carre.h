//
// Created by eric on 12/10/2021.
//

#ifndef SURCHARGEEXEMPLE_CARRE_H
#define SURCHARGEEXEMPLE_CARRE_H


class Carre {
private:
    int taillecotedefaut;

public:
    Carre();
    Carre(int taillecotedefaut);
    Carre(float taillecotedefaut);
    void calculPerimetre(int taillecote);
    void calculPerimetre(); //overload de calculPerimetre

};


#endif //SURCHARGEEXEMPLE_CARRE_H
