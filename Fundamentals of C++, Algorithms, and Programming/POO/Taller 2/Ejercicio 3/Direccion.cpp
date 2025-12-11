#include "Direccion.h"
#include <iostream>
#include <string>

Direccion::Direccion(){
    comuna = "";
    calle = "";
    numero = 0;
}

Direccion::Direccion(std::string co, std::string ca, int nu)
:comuna(co), calle(ca), numero(nu){}

Direccion::Direccion(const Direccion& X){
    comuna = X.comuna;
    calle = X.calle;
    numero = X.numero;
}

void Direccion::ver(){
    std::cout<<"Comuna: "<<comuna<<std::endl;
    std::cout<<"Calle: "<<calle<<std::endl;
    std::cout<<"Numero: "<<numero<<std::endl;
}