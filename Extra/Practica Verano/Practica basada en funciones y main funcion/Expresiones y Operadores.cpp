/*
LOS ENUNCIADOS DE LOS EJERCICIOS ESTAN EN EL ARCHIVO EJERCICIOS PROPUESTOS Y RESUELTOS EN CPP.PDF.

NOTAR: TODOS LOS EJERCICIOS LOS TRABAJARE CON FUNCIONES AGREGANDO LA FUNCION PRINCIPAL PARA MEJOR EFECTIVIDAD.

EVITARE: Uso del "using namespace std;" ya que en proyectos grandes ayuda a ordenar el codigo.
*/

#include <iostream> //Sirve para la entrada y salida de datos
#include <cmath> //Es la libreria de funciones matematicas como potencia o raiz cuadrada es el standar en c++ moderno pq el el otro math.h es del c

float Ejercicio1(float a, float b){
    return static_cast<float>(a/b + 1);
}

float Ejercicio2(float a, float b, float c, float d){
    return static_cast<float>((a+b)/(c+d));
}

float Ejercicio3(float a, float b, float c, float d, float f){
    return static_cast<float>(a+(b/c)/d+(c/f));
}

float Ejercicio4(float a, float b, float c, float d){
    return static_cast<float>(a+(b/(c-d)));
}

void Ejercicio5(int a, int b){
    int aux; 
    
    aux = a; /* Esto funciona como un swapping, se usa con frecuencia en el algoritmo de ordenamiento*/
    a = b;
    b = aux;

    return;
}

void Ejercicio6(){
    float n1, n2, n3;
    float mediapromedio=0;

    std::cout<<"Ingrese la nota 1: "<<std::endl;
    std::cin>>n1;

    std::cout<<"Ingrese la nota 2: "<<std::endl;
    std::cin>>n2;

    std::cout<<"Ingrese la nota 3: "<<std::endl;
    std::cin>>n3;

    mediapromedio = static_cast<float>((n1+n2+n3)/3);
    return;
}

void Ejercicio7(){
    float n1, n2, n3;
    float promedioponderado=0;

    std::cout<<"Ingrese la nota de practicas: "<<std::endl;
    std::cin>>n1;

    std::cout<<"Ingrese la nota teorica: "<<std::endl;
    std::cin>>n2;

    std::cout<<"Ingrese la nota de participacion: "<<std::endl;
    std::cin>>n3;

    promedioponderado = static_cast<float>((n1*0.30+n2*0.60+n3*0.10)/(0.30+0.60+0.10));

    return;
}

double Ejercicio8(float co, float ca){
    double hip=0;
    hip = pow(co,2)+pow(ca,2); //la funcion pow quiere decir la potencia de algo entonces primero va la base y luego el exponente
    return sqrt(hip); // sqrt es la raiz cuadrada y la variable va a dentro
}

double Ejercicio9(float x, float y){
    return static_cast<float>(sqrt(x)/(pow(y,2)-1));
}

void Ejercicio10(float b,  float a, float c){
    double delta;
    delta = pow(b,2)-4*a*c;
    double x1, x2;

    if (delta > 0){
        x1 = static_cast<float>((-b+sqrt(delta))/(2*a));
        x2 = static_cast<float>((-b-sqrt(delta))/(2*a));
        
        std::cout<<"\nLa funcion tiene 2 soluciones reales"<<std::endl;
        std::cout<<"\nLa solucion x1 es: "<<x1;
        std::cout<<"\nLa solucion x2 es: "<<x2;
    }

    else if (delta == 0){
        x1 = static_cast<float>((-b+sqrt(delta))/(2*a));

        std::cout<<"\nLa funcion tiene 1 solucion real"<<std::endl;
        std::cout<<"\nLa solucion x1 y x2 es: "<<x1;
    }

    else if (delta < 0){
        std::cout<<"\nLa funcion no tiene ninguna solucion real"<<std::endl;
    }
    
    return;
}