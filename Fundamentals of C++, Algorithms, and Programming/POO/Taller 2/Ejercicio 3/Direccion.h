#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>
#include <iostream>

class Direccion{
    private:
    std::string comuna;
    std::string calle;
    int numero;

    public:
    Direccion();
    Direccion(std::string, std::string, int);
    Direccion(const Direccion&);

    void setcomuna(std::string co){comuna=co;}
    void setcalle(std::string ca){calle=ca;}
    void setnumero(int nu){numero=nu;}
    std::string getcomuna(){return comuna;}
    std::string getcalle(){return calle;}
    int getnumero(){return numero;}

    void ver();
};

#endif