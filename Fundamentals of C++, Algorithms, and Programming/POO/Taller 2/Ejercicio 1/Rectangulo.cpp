#include "Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo(){
    largo = 0.0;
    ancho = 0.0;
}

Rectangulo::Rectangulo(double la, double an)
: largo(la), ancho(an){}

Rectangulo::Rectangulo(const Rectangulo& X){
    largo = X.largo;
    ancho = X.ancho;
}

double Rectangulo::area(){
    return largo*ancho;
}

double Rectangulo::perimetro(){
    return 2*(largo+ancho);
}

void Rectangulo::Presenta(){
    std::cout<<"El rectangulo de largo: "<<largo<<" y ancho: "<<ancho<<std::endl;
}


