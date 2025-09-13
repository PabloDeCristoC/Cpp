//Ejercicio 1

#include <iostream>
#include <string>
using namespace std;

class Rectangulo{
    private:
    float ancho;
    float alto;

    public:

    Rectangulo(); //mejor sin parametros es mejor practica

    void setancho(float);
    float getancho(); //idealmente el get debe ser con el tipo del atributo
    void setalto(float);
    float getalto(); //idealmente el get debe ser con el tipo del atributo
    void ver();

    float area(); //usan si o si los atributos de la clase
    float perimetro(); //usan si o si los atributos de la clase

};

Rectangulo::Rectangulo(){ //mejor sin parametros, es mas comodo

}




void Rectangulo::setancho(float an /*"Aca va el valor que quiero dar"*/){
    ancho = an;
}
float Rectangulo::getancho(){
    return ancho;
}
void Rectangulo::setalto(float al){
    alto = al;
}

float Rectangulo::getalto(){
    return alto;
}
void Rectangulo::ver(){
    std::cout<<"El ancho es: "<<ancho<<std::endl;
    std::cout<<"El alto es: "<<alto<<std::endl;
}


float Rectangulo::area(){
    return ancho*alto;
}

float Rectangulo::perimetro(){
    return 2*(ancho+alto);
}



int main(){
    float an; 
    float al;

    std::cout<<"Ingrese el ancho: ";
    std::cin>>an;

    std::cout<<"Ingrese el alto: ";
    std::cin>>al;

    Rectangulo R1; //va sin parametros
    R1.setancho(an);
    R1.setalto(al);
    R1.ver();

    std::cout<<"\nEl area es: "<<R1.area()<<std::endl;
    std::cout<<"El perimetro es: "<<R1.perimetro()<<std::endl;

    return 0;
}