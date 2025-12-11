#include "Persona.h"
#include "Direccion.h"
#include <iostream>
#include <string>

Persona::Persona(){
    nombre = "";
    edad = 0;
}

Persona::Persona(std::string no, int ed, Direccion di)
:nombre(no), edad(ed), direccion(di){}

Persona::Persona(const Persona& X){
    nombre = X.nombre;
    edad = X.edad;
    direccion = X.direccion;
}

void Persona::ver(){
    std::cout<<"Nombre: "<<nombre<<std::endl;
    std::cout<<"Edad: "<<edad<<std::endl;
    std::cout<<"Direccion: "; direccion.ver(); 
}



