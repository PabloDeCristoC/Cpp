#include <iostream>
#include <string>
#include "Direccion.h"
#include "Persona.h"

int main(){
    std::string co, ca, no;
    int nu, ed, n;

    std::cout<<"\nIngrese la cantidad de personas: "<<std::endl; std::cin>>n; std::cin.ignore();
    Persona personas[n];

    for (int i = 0; i < n; i++)
    {
        std::cout<<"Ingrese la comuna: "; std::getline(std::cin, co);
        std::cout<<"Ingrese la calle: "; std::getline(std::cin, ca);
        std::cout<<"Ingrese el numero: "; std::cin>>nu; std::cin.ignore();

        Direccion di(co,ca,nu);

        std::cout<<"Ingrese el nombre: "; std::getline(std::cin, no);
        std::cout<<"Ingrese la edad: "; std::cin>>ed; std::cin.ignore();
        
        
        personas[i] = Persona(no, ed, di);
    }
    return 0;
}