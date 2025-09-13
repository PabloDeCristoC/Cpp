//Ejercicio 9

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

void ver(){
    
}

int main(){
    Pelicula p1;

    p1.settitulo("Inception");
    p1.setanio(2010);
    p1.setduracionMin(148);

    p1.ver();
    p1.convertirahoras();

    return 0;
}
