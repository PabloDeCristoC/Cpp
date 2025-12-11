#include "Rectangulo.h"
#include <iostream>

void Presenta(Rectangulo r){
    std::cout<<"Las dimensiones: "<<r.getlargo()<<" x "<<r.getancho()<<std::endl;
    std::cout<<"El area del Rectangulo es: "<<r.area()<<std::endl;
    std::cout<<"El perimetro del Rectangulo es: "<<r.perimetro()<<std::endl;
}
