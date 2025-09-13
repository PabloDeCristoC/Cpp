//Ejercicio 8

#include <iostream>
#include <string>

class CajaAhorro{
    private:
    std::string titular;
    double saldo;

    public:
    CajaAhorro();
    void settitular(std::string);
    std::string gettitular();
    void setsaldo(double);
    double getsaldo();
    void ver();

    void depositar (double monto);
    void retirar (double monto);
};

CajaAhorro::CajaAhorro(){}

void CajaAhorro::settitular(std::string t){
    titular = t;
}

std::string CajaAhorro::gettitular(){
    return titular;
}

void CajaAhorro::setsaldo(double s){
    saldo = s;
}

double CajaAhorro::getsaldo(){
    return saldo;
}

void CajaAhorro::ver(){
    std::cout<<"Titular: "<<titular<<std::endl;
    std::cout<<"Saldo: "<<saldo<<std::endl;
}

void CajaAhorro::depositar(double monto){
    saldo = saldo + monto;
}

void CajaAhorro::retirar(double monto){
    saldo = saldo - monto;
}

int main(){
    CajaAhorro c1;

    c1.settitular("Pablo");
    c1.setsaldo(1000);

    c1.ver();

    std::cout<<"Depositando 500..."<<std::endl;
    c1.depositar(500);
    c1.ver();

    std::cout<<"Retirando 300..."<<std::endl;
    c1.retirar(300);
    c1.ver();

    return 0;
}
