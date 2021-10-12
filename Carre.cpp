//
// Created by eric on 12/10/2021.
//

#include <iostream>
#include "Carre.h"
using namespace std;

Carre::Carre() {
    taillecotedefaut=2;
}

Carre::Carre(int taillecotedefaut):taillecotedefaut(taillecotedefaut) {

}

Carre::Carre(float taillecotedefaut):taillecotedefaut((int)taillecotedefaut) {
cout<<"cast float to int"<<endl;
}

void Carre::calculPerimetre(int taillecote) {
cout<<"perimetre="<<taillecote*4<<endl;
}



void Carre::calculPerimetre() {
    cout<<"perimetre="<<taillecotedefaut*4<<endl;
}




