//Ejercicio 5

#include <iostream>
#include <string>

class Reloj24{
    private:
    int hora;
    int minuto;
    int segundo;

    public:
    Reloj24();

    void sethora(int);
    void setminuto(int);
    void setsegundo(int);

    int gethora();
    int getminuto();
    int getsegundo();

    void ver();
    
    void tick();
};

Reloj24::Reloj24(){}


void Reloj24::sethora(int h){
    hora = h;
}
void Reloj24::setminuto(int m){
    minuto = m;
}
void Reloj24::setsegundo(int s){
    segundo = s;
}


int Reloj24::gethora(){
    return hora; 
}
int Reloj24::getminuto(){
    return minuto; 
}
int Reloj24::getsegundo(){
    return segundo; 
}

void Reloj24::ver(){
    std::cout<<hora<<":"<<minuto<<":"<<segundo<<std::endl;
}

void Reloj24::tick(){
    segundo++;
    if (segundo == 60){
        segundo = 0;
        minuto++;
    
           if (minuto == 60){
            minuto = 0;
            hora++;
    
              if (hora == 24){
                hora = 0;
            }
        }
    }
}

int main(){
    Reloj24 R1;
    R1.sethora(23);
    R1.setminuto(59);
    R1.setsegundo(59);

    for(int i=0;i<10;i++){ //solo por 10 segundos, para que funcione durante 24 horas serian 86400 segundos
        R1.ver();
        R1.tick();
    }

}