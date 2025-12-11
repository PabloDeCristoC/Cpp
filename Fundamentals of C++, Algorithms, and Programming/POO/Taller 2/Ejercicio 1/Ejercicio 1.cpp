#include <iostream>
#include "Rectangulo.h"

int main(){
    double an, la;

    Rectangulo r1;
    Rectangulo r2;

    std::cout<<"Ingrese el ancho: ";
    std::cin>>an;
    std::cout<<"Ingrese el largo: ";
    std::cin>>la;

    r1.setancho(an);
    r1.setlargo(la);
    
    std::cout<<"Ingrese el ancho: ";
    std::cin>>an;
    std::cout<<"Ingrese el largo: ";
    std::cin>>la;

    r2.setancho(an);
    r2.setlargo(la);


    if(r1.area() > r2.area()){
        std::cout<<"El mayor es el rectangulo 1";
    } 
    else if(r1.area() < r2.area()){
        std::cout<<"El mayor es el Rectangulo 2";   
    }
    else{
        std::cout<<"Ambos son iguales";
    }
    
    return 0;
}