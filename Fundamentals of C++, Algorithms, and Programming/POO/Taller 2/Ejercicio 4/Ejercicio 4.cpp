#include <iostream>
#include "Prestamo.h"

int main(){
    int n;
    std::cout<<"Ingrese la cantidad de libros"<<std::endl; std::cin>>n;
    Prestamo p[100];
    p[1] = Prestamo(101, 12345678, 20241101, 20241115, false);
    int hoy = 20250918;
    return 0;
}
