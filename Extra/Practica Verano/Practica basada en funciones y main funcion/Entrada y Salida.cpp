/*
LOS ENUNCIADOS DE LOS EJERCICIOS ESTAN EN EL ARCHIVO EJERCICIOS PROPUESTOS Y RESUELTOS EN CPP.PDF.

NOTAR: TODOS LOS EJERCICIOS LOS TRABAJARE CON FUNCIONES AGREGANDO LA FUNCION PRINCIPAL PARA MEJOR EFECTIVIDAD.

EVITARE: Uso del "using namespace std;" ya que en proyectos grandes ayuda a ordenar el codigo.
*/

#include <iostream>

void Ejercicio1(int n1, int n2){
    int suma=0, resta=0;
    float multiplicacion=0, division=0;

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1*n2;
    division = n1/n2;

    return;
}

float Ejercicio2(float precio, float iva){
    float PrecioConIva=0;
    return precio*(1 + (iva/100));
}

void Ejercicio3(){
    int edad;
    char sexo[10];
    float altura;
    
    std::cout<<"\nIngrese la edad: "<< std::endl;
    std::cin>>edad;

    std::cout<<"\nIngrese el sexo: "<< std::endl;
    std::cin>>sexo;

    std::cout<<"\nIngrese la altura: "<< std::endl;
    std::cin>>altura;

    std::cout<<edad;
    std::cout<<sexo;
    std::cout<<altura;

    return;
}