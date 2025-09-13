//Ejercicio 2

#include <iostream>
#include <string>
using namespace std;

class Producto{
    private:
    std::string Nombre;
    float Precio;
    int Stock;

    public:
    Producto();

    void setnombre(std::string);
    void setprecio(float);
    void setstock(int);

    std::string getnombre();
    float getprecio();
    int getstock();

    void ver();

    double aplicardescuento(double porcentaje);
};


Producto::Producto(){}

void Producto::ver(){
    std::cout<<"\nEl nombre es: "<<Nombre;
    std::cout<<"\nEl precio es: "<<Precio;
    std::cout<<"\nEl stock es: "<<Stock;
}



void Producto::setnombre(std::string N){
    Nombre = N;
}
std::string Producto::getnombre(){
    return Nombre;
}


void Producto::setprecio(float P){
    Precio = P;
}
float Producto::getprecio(){
    return Precio;
}

void Producto::setstock(int S){
    Stock = S;
}
int Producto::getstock(){
    return Stock;
}



double Producto::aplicardescuento(double porcentaje){
    
    double descuento=Precio;

    if (porcentaje >= 0 && porcentaje <= 100){
        descuento = Precio-(Precio*porcentaje/100);
    }

    return descuento;
}




int main(){

    std::string N;
    float P;
    int S;
    float porcentaje;
    
    std::cout<<"Ingrese el nombre: ";
    std::getline(std::cin, N);


    std::cout<<"Ingrese el precio: ";
    std::cin>>P;
    std::cout<<"Ingrese el stock: ";
    std::cin>>S;

    std::cout<<"Ingrese el porcentaje de descuento a aplicar: "<<std::endl;
    std::cin>>porcentaje;

    Producto P1;
    P1.setnombre(N);
    P1.setprecio(P);
    P1.setstock(S);

    std::cout<<"\n"<<std::endl;

    P1.ver();

    std::cout<<"\nEl precio con descuento aplicado es: "<<P1.aplicardescuento(porcentaje)<<std::endl;

    return 0;
}
