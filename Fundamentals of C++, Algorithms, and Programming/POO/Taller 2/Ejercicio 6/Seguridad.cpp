#include "Seguridad.h"
#include <iostream>
#include <string>

Seguridad::Seguridad(){
    sistema = "";
    usuario = "";
    clave = "";
    fechaCaducidad = "";
}

Seguridad::Seguridad(std::string si, std::string us, std::string cla, std::string fec)
: sistema(si), usuario(us), clave(cla), fechaCaducidad(fec){}

Seguridad::Seguridad(const Seguridad& s){
    sistema = s.sistema;
    usuario = s.usuario;
    clave = s.clave;
    fechaCaducidad = s.fechaCaducidad;
}
