//Ejercicio 10

#include <iostream>
#include <string>

class Pelicula{
    private:
    std::string titulo;
    int anio;
    int duracionMin;

    public:
    Pelicula();
    void settitulo(std::string);
    std::string gettitulo();
    void setanio(int);
    int getanio();
    void setduracionMin(int);
    int getduracionMin();
    void ver();

    void convertirahoras();
};

Pelicula::Pelicula(){}

void Pelicula::settitulo(std::string t){
    titulo = t;
}
std::string Pelicula::gettitulo(){
    return titulo;
}

void Pelicula::setanio(int a){
    anio = a;
}
int Pelicula::getanio(){
    return anio;
}

void Pelicula::setduracionMin(int d){
    duracionMin = d;
}
int Pelicula::getduracionMin(){
    return duracionMin;
}

void Pelicula::ver(){
    std::cout<<"Titulo: "<<titulo<<std::endl;
    std::cout<<"Anio: "<<anio<<std::endl;
    std::cout<<"Duracion (minutos): "<<duracionMin<<std::endl;
}

void Pelicula::convertirahoras(){
    int horas = duracionMin / 60;
    int minutos = duracionMin % 60;

    std::cout<<"Duracion: "<<horas<<"h "<<minutos<<"min"<<std::endl;
}
//Ejercicio 10

#include <iostream>
#include <string>

class CuentaCorreo{
    private:
    std::string usuario;
    std::string dominio;

    public:
    CuentaCorreo();
    void setusuario(std::string);
    std::string getusuario();
    void setdominio(std::string);
    std::string getdominio();
    void ver();

    std::string direccion();
    void cambiarDominio(std::string nuevo);
};

CuentaCorreo::CuentaCorreo(){}

void CuentaCorreo::setusuario(std::string u){
    usuario = u;
}
std::string CuentaCorreo::getusuario(){
    return usuario;
}

void CuentaCorreo::setdominio(std::string d){
    dominio = d;
}
std::string CuentaCorreo::getdominio(){
    return dominio;
}

void CuentaCorreo::ver(){
    std::cout<<"Usuario: "<<usuario<<std::endl;
    std::cout<<"Dominio: "<<dominio<<std::endl;
    std::cout<<"Direccion completa: "<<direccion()<<std::endl;
}

std::string CuentaCorreo::direccion(){
    return usuario + "@" + dominio;
}

void CuentaCorreo::cambiarDominio(std::string nuevo){
    dominio = nuevo;
}

int main(){
    CuentaCorreo c1;
    std::string usuario, dominio, nuevoDominio;

    std::cout<<"Ingrese el usuario: ";
    std::getline(std::cin, usuario);

    std::cout<<"Ingrese el dominio: ";
    std::getline(std::cin, dominio);

    c1.setusuario(usuario);
    c1.setdominio(dominio);

    std::cout<<"\nInformacion de la cuenta:"<<std::endl;
    c1.ver();

    std::cout<<"\nIngrese un nuevo dominio: ";
    std::getline(std::cin, nuevoDominio);

    c1.cambiarDominio(nuevoDominio);

    std::cout<<"\nCuenta actualizada:"<<std::endl;
    c1.ver();

    return 0;
}

