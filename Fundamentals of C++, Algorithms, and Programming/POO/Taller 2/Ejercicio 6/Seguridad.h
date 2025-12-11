#ifndef SEGURIDAD_H
#define SEGURIDAD_H
#include <string>

class Seguridad{
    private:
    std::string sistema;
    std::string usuario;
    std::string clave;
    std::string fechaCaducidad;
    public:
    Seguridad();
    Seguridad(std::string, std::string, std::string, std::string);
    Seguridad(const Seguridad&);

    void setsistema(std::string si){sistema=si;}
    std::string getsistema(){return sistema;}
    void setusuario(std::string us){usuario=us;}
    std::string getusuario(){return usuario;}
    void setclave(std::string cla){clave=cla;}
    std::string getclave(){return clave;}
    void setFechaCaducidad(std::string fec){fechaCaducidad=fec;}
    std::string getFechaCaducidad(){return fechaCaducidad;}
};

#endif