//Ejercicio 3

#include <iostream>
#include <string>

class CuentaBancaria{
    private:
    std::string titular;
    int numero;
    int saldo;

    public:
    CuentaBancaria();
    void ver();

    void settitular(std::string);
    void setnumero(int);
    void setsaldo(int);

    std::string gettitular();
    int getnumero();
    int getsaldo();

    void depositar(double monto);
    void retirar (double monto);
};



CuentaBancaria::CuentaBancaria(){}



void CuentaBancaria::ver(){
    std::cout<<"El nombre del titular es: "<<titular;
    std::cout<<"\nEl numero de cuenta es: "<<numero;
    std::cout<<"\nEl saldo de la cuenta es: "<<saldo;
}
void CuentaBancaria::settitular(std::string ti){
    titular = ti;
}
void CuentaBancaria::setnumero(int nu){
    numero = nu;
}
void CuentaBancaria::setsaldo(int sa){
    saldo = sa;
}



std::string CuentaBancaria::gettitular(){
    return titular;
}
int CuentaBancaria::getnumero(){
    return numero;
}
int CuentaBancaria::getsaldo(){
    return saldo;
}

void CuentaBancaria::depositar(double monto){
    if (monto > 0){
        saldo += monto;
        std::cout<<"Se depositaron "<<monto<<". Nuevo saldo: "<<saldo<<std::endl;
    } else {
        std::cout<<"El monto a depositar debe ser mayor que 0"<<std::endl;
    }
}

void CuentaBancaria::retirar(double monto){
    if (monto > 0 && saldo >= monto){
        saldo -= monto;
        std::cout<<"Se retiraron "<<monto<<". Nuevo saldo: "<<saldo<<std::endl;
    } else {
        std::cout<<"No se pudo realizar el retiro"<<std::endl;
    }
}

int main(){

    std::string ti;
    int nu;
    int sa;
    double montoDeposito, montoRetiro;

    std::cout<<"Ingrese el titular de la cuenta: ";
    std::getline(std::cin,ti);
    std::cout<<"\nIngrese el numero de cuenta: ";
    std::cin>>nu;
    std::cout<<"\nIngrese el saldo de la cuenta: ";
    std::cin>>sa;


    CuentaBancaria C1;
    C1.settitular(ti);
    C1.setnumero(nu);
    C1.setsaldo(sa);

    std::cout<<"\nLa informacion de la cuenta es"<<std::endl;
    C1.ver();

    std::cout << "\nIngrese el monto a depositar: ";
    std::cin >> montoDeposito;
    C1.depositar(montoDeposito);

    std::cout << "\nIngrese el monto a retirar: ";
    std::cin >> montoRetiro;
    C1.retirar(montoRetiro);

    return 0;
}