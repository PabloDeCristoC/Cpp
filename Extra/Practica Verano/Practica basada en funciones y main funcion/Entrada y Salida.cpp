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
    division = static_cast<float>(n1)/n2;  //ESTO TRUNCA ANTES LA DIVISION PQ SI NO, ES DIVISION ENTERA

    std::cout << "\nSuma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;
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

int main(){
    int n1, n2;
    float precio, iva;

    std::cout<<"\nIngrese un numero 1: "<< std::endl;
    std::cin>>n1;
    std::cout<<"\nIngrese un numero 2: "<< std::endl;
    std::cin>>n2;

    std::cout<<"\nIngrese el precio del producto: "<< std::endl;
    std::cin>>precio;
    std::cout<<"\nIngrese el iva a aplicar (en porcentaje): "<< std::endl;
    std::cin>>iva;

    Ejercicio1(n1, n2);
    std::cout<<"El precio con iva es: "<<Ejercicio2(precio, iva)<<std::endl;
    Ejercicio3();

    return 0;
}