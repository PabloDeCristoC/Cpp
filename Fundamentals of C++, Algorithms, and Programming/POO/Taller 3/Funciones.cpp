#include <iostream>
#include <string>
#include <stack>
#include <queue>

int maximo(std::stack<int> s){
    int max = s.top();
    s.pop(); 

    while(!s.empty()){
        int actual = s.top();
        if (actual > max){
            max = actual;
        }
        s.pop();
    }
    return max;
}

int minimo(std::stack<int> s){
    int min = s.top();
    s.pop();
    while(!s.empty()){
        int actual = s.top();
        if (actual < min){
            min = actual;
        }
        s.pop();
    }
    return min;
}

double promedio(std::stack<int> s){
    int cont=0;
    int suma=0;
    while (!s.empty()){
        suma += s.top();
        cont++;
        s.pop();
    }
    return static_cast<double>(suma)/cont; //para asegurar decimales
}

int contarMayoresQue(std::stack<int> s, int umbral){
    int cont=0;
    while(!s.empty()){
        if(s.top()>umbral){
            cont++;
        }
        s.pop();
    }
    return cont;
}

void invertir(std::stack<int>& s){
    std::stack<int> aux1;
    std::stack<int> aux2;

    while(!s.empty()){
        aux1.push(s.top());
        s.pop();
    }

    while(!aux1.empty()){
        aux2.push(aux1.top());
        aux1.pop();
    }

    while(!aux2.empty()){
        s.push(aux2.top());
        aux2.pop();
    }
}

void ordenarAsc(std::stack<int>& s){
    std::stack<int> aux;
    while (!s.empty()){
        int temp = s.top();
        s.pop();
        
        while (!aux.empty() && aux.top() > temp){
            s.push(aux.top());
            aux.pop();
        }

        aux.push(temp);

        while(!aux.empty()){
            s.push(aux.top());
            aux.pop();
        }
    }
}

void eliminarTopeN(std::stack<int>& s, int n){
    int eliminados=0;
    while(!s.empty() && eliminados < n){
        s.pop();
        eliminados++;
    }
}


//funcion uax para el ejercicio que sigue

bool existeEnStack(std::stack<int> s, int valor){
    bool result = false;
    while (!s.empty())
    {
        if(s.top()==valor){
            result=true;
        }
        s.pop();
    }
    return result;
}

void eliminarDuplicados(std::stack<int>& s){
    std::stack<int> aux;
    while (!s.empty()){
        int actual = s.top();
        s.pop();

        if(!existeEnStack(aux, actual)){
            aux.push(actual);
        }
    }

    while(!aux.empty()){
        s.push(aux.top());
        aux.pop();
    }
}

bool compararIgualdad(std::stack<int> a, std::stack<int> b){
    if (a.size() != b.size()){
        return false;
    }

    while(!a.empty()){
        if (a.top() != b.top()){
            return false;
        }
        a.pop();
        b.pop();
    }
    return true;
}

void rotarK(std::stack<int> s, int k){
    std::stack<int> aux1;
    std::stack<int> aux2;

    int size = s.size();
    
    if(k < size){
        k = k % size;
    }

    for(int i = 0; i < k && !s.empty(); i++){
        aux1.push(s.top());
        s.pop();
    }

    while(!s.empty()){
        aux2.push(s.top());
        s.pop();
    }

    while(!aux1.empty()){
        s.push(aux1.top());
        aux1.pop();
    }

    while(!aux2.empty()){
        s.push(aux2.top());
        aux2.pop();
    }
}

std::stack<int> filtrar(std::stack<int> s, int k){
    std::stack<int> aux;
    std::stack<int> result;

    while(!s.empty()){
        if(s.top()>k){
            aux.push(s.top());
        }
        s.pop();
    }

    while(!aux.empty()){
        result.push(aux.top());
        aux.pop();
    }

    return result;
}

void aplicar(std::stack<int>& s, int k){
    
}