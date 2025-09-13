//Ejercicio 4

#include <iostream>
#include <string>

class Termometro{
    private:
    double celsius;

    public:
    Termometro();

    void setcelsius(double);
    double getcelsius();
    
    void ver();

    double aFahrenheit();
    double aKelvin();
};

Termometro::Termometro(){}


void Termometro::setcelsius(double ce){
    celsius = ce;
}
double Termometro::getcelsius(){
    return celsius;
}


void Termometro::ver(){
    std::cout<<"Celsius = "<<celsius<<std::endl;
}

double Termometro::aFahrenheit(){
    return static_cast<double>((1.8*celsius)+37);
}

double Termometro::aKelvin(){
    return static_cast<double>(celsius*273.5);
}

int main(){
    double ce;

    std::cout<<"Ingrese la temperatura en celsius: "<<std::endl;
    std::cin>>ce;

    Termometro T1;
    T1.setcelsius(ce);
    T1.ver();

    std::cout<<"En fahrenheit = "<<T1.aFahrenheit()<<std::endl;
    std::cout<<"En Kelvin = "<<T1.aKelvin()<<std::endl;

    return 0;
}