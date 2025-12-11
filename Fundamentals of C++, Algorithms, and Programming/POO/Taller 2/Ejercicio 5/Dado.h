#ifndef DADO_H
#define DADO_H

class Dado {
    private:
        int valor;
        void lineaAsteriscos();
    
    public:
        Dado();
        Dado(int);
        Dado(const Dado&);
        
        void setValor(int va){valor=va;}
        int getValor(){return valor;}
        
        void tirar();
        void imprimir();
};

Dado comparar(Dado d1, Dado d2);
void tirarDosDados(Dado &d1, Dado &d2);
bool esDoble(Dado d1, Dado d2);
void jugarCraps(Dado &d1, Dado &d2);
void frecuencia(Dado &d, int n);
int mayorDeTres(Dado d1, Dado d2, Dado d3);
bool todosIguales(Dado d1, Dado d2, Dado d3);

#endif