#include "Dado.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Dado comparar(Dado d1, Dado d2){
    Dado Empate(0);
    if (d1.getValor() > d2.getValor()){
        return d1;
    }
    if (d1.getValor() < d2.getValor()){
        return d2;
    }
    else{
        return Empate;
    }
}

void tirarDosDados(Dado &d1, Dado &d2){
    d1.tirar();
    d2.tirar();
    std::cout<<"Dado 1: "<<d1.getValor()<<std::endl;
    std::cout<<"Dado 2: "<<d2.getValor()<<std::endl;
    std::cout<<"Suma: "<<d1.getValor()+d2.getValor()<<std::endl;
}

bool esDoble(Dado d1, Dado d2){
    bool result = false;
    if (d1.getValor() == d2.getValor())
    {
        result = true;
    }
    return result;
}

void jugarCraps(Dado &d1, Dado &d2){
    d1.tirar();
    d2.tirar();
    int suma = d1.getValor() + d2.getValor();
    
    if (suma == 7 || suma == 11){
        std::cout << "El jugador gana" << std::endl;
    }
    else if (suma == 2 || suma == 3 || suma == 12){
        std::cout << "El jugador pierde" << std::endl;
    }
    else {
        std::cout << "El juego sigue" << std::endl;
    }
}

void frecuencia(Dado &d, int n){
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;
    for (int i = 0; i < n; i++)
    {
        d.tirar();
        if (d.getValor() == 1){
            cont1++;
        }
        if (d.getValor() == 2)
        {
            cont2++;
        }
        if (d.getValor() == 3)
        {
            cont3++;
        }
        if (d.getValor() == 4)
        {
            cont4++;
        }
        if (d.getValor() == 5)
        {
            cont5++;
        }
        if (d.getValor() == 6)
        {
            cont6++;
        }
    }

    std::cout<<"La cantidad que salio 1: "<<cont1<<std::endl;
    std::cout<<"La cantidad que salio 2: "<<cont2<<std::endl;
    std::cout<<"La cantidad que salio 3: "<<cont3<<std::endl;
    std::cout<<"La cantidad que salio 4: "<<cont4<<std::endl;
    std::cout<<"La cantidad que salio 5: "<<cont5<<std::endl;
    std::cout<<"La cantidad que salio 6: "<<cont6<<std::endl;
}

int mayorDeTres(Dado d1, Dado d2, Dado d3){
    int mayor = d1.getValor();
    
    if (d2.getValor() > mayor) {
        mayor = d2.getValor();
    }
    if (d3.getValor() > mayor) {
        mayor = d3.getValor();
    }
    
    return mayor;
}

bool todosIguales(Dado d1, Dado d2, Dado d3){
    bool result = false;
    if (d1.getValor() == d2.getValor() && d2.getValor() == d3.getValor()) {
        result = true;
    }
    return result;
}