#ifndef USUARIO_H
#define USUARIO_H
#include "Seguridad.h"
#include <string>

class Usuario{
    private:
    std::string nombre;
    int rut;
    std::string departamento;
    Seguridad seguridad;
    public:
    Usuario();
    Usuario(std::string, int, std::string, Seguridad);
    Usuario(const Usuario&);

    void setnombre(std::string no){nombre=no;}
    std::string getnombre(){return nombre;}
    void setrut(int ru){rut=ru;}
    int getrut(){return rut;}
    void setdepartamento(std::string dep){departamento=dep;}
    std::string getdepartamento(){return departamento;}
    void setseguridad(Seguridad seg){seguridad=seg;}
    Seguridad getseguridad(){return seguridad;}
};

#endif