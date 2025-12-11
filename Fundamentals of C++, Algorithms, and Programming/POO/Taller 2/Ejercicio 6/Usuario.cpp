#include "Usuario.h"
#include <iostream>
#include <string>

Usuario::Usuario(){
    nombre = "";
    rut = 0;
    departamento = "";
    // seguridad se inicializa automáticamente con su constructor por defecto
}

Usuario::Usuario(std::string nom, int ru, std::string dep, Seguridad seg)
: nombre(nom), rut(ru), departamento(dep), seguridad(seg){}

Usuario::Usuario(const Usuario& u){
    nombre = u.nombre;
    rut = u.rut;
    departamento = u.departamento;
    seguridad = u.seguridad;
}