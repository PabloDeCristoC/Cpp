#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include "Direccion.h"

class Persona{
    private:
    std::string nombre;
    int edad;
    Direccion direccion;

    public:
    Persona();
    Persona(std::string, int, Direccion);
    Persona(const Persona&);

    void setnombre(std::string no){nombre = no;}
    void setedad(int ed){edad = ed;}
    void setdireccion(Direccion di){direccion = di;}
    std::string getnombre(){return nombre;}
    int getedad(){return edad;}
    Direccion getdireccion(){return direccion;}

    void ver();
};

#endif 