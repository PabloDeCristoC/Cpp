//Ejercicio 7

#include <iostream>
#include <string>

class Cronometro{
    private:
    int horas;
    int minutos;
    int segundos;

    public:
    Cronometro();
    
    void ver();

    void sethoras(int);
    void setminutos(int);
    void setsegundos(int);
    int gethoras();
    int getminutos();
    int getsegundos();

    void tick();
    void reset();
};

Cronometro::Cronometro(){}

void Cronometro::ver(){
    std::cout<<horas<<":"<<minutos<<":"<<segundos<<std::endl;
}


void Cronometro::sethoras(int h){
    horas = h;
}
void Cronometro::setminutos(int m){
    minutos = m;
}
void Cronometro::setsegundos(int s){
    segundos = s;
}


int Cronometro::gethoras(){
    return horas;
}
int Cronometro::getminutos(){
    return minutos;
}
int Cronometro::getsegundos(){
    return segundos;
}

void Cronometro::tick(){
    segundos++;
    if (segundos == 60){
        minutos++;
        segundos=0;
        if (minutos==60){
            horas++;
            minutos=0;
        
            if (horas == 24){
                horas=0;
            }
        }    
    }
}

void Cronometro::reset(){
    horas = 0;
    minutos = 0;
    segundos = 0;
}

int main(){
    Cronometro c1;
    
    c1.sethoras(23);
    c1.setminutos(59);
    c1.setsegundos(59);

    c1.ver();   
    c1.tick();
    c1.ver();   
    c1.tick();
    c1.ver();   
    
    c1.reset();
    c1.ver();   
    
    return 0;
}