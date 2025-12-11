#include "Dado.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Dado::Dado(){
    valor = 1;
}

Dado::Dado(int va)
: valor(va){}

Dado::Dado(const Dado& D){
    valor=D.valor;
}

void Dado::lineaAsteriscos(){
    for (int i = 0; i < valor; i++)
    {
        std::cout<<"*";
    }
}

void Dado::tirar(){
    valor = rand() % 6 + 1;
}

void Dado::imprimir(){
    std::cout<<"Valor del dado: "<<valor<<std::endl;
    lineaAsteriscos();
}