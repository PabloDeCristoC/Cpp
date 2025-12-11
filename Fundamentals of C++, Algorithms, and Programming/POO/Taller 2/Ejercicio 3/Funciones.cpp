#include "Direccion.h"
#include "Persona.h"
#include <iostream>
#include <string>

void mostrarSoloDirecciones(Persona arr[], int n){
    for (int i = 0; i < n; i++){
        arr[i].getdireccion().ver();
        std::cout<<std::endl;
    }
}
  
int buscarPorComuna(Persona arr[], int n, std::string comuna){
    for (int i = 0; i < n; i++){
        if (arr[i].getdireccion().getcomuna() == comuna)
        {
            return i;
        }
    }
    return -1;
}

int contarPorComuna(Persona arr[], int n, std::string comuna){
    int cont = 0;
    for(int i=0; i<n; i++){
        if (arr[i].getdireccion().getcomuna() == comuna)
        {
            cont++;
        }
    }
    return cont;
}

Persona mayorEdad(Persona arr[], int n){
    Persona Mayoredad = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i].getedad() > Mayoredad.getedad())
        {
            Mayoredad = arr[i];
        }
    }
    return Mayoredad;
}

Persona menorEdad(Persona arr[], int n){
    Persona menoredad = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i].getedad() < menoredad.getedad())
        {
            menoredad = arr[i];
        }
    }
    return menoredad;
}

bool mismoCalle(Persona p1, Persona p2){
    bool result = false;
    if (p1.getdireccion().getcalle() == p2.getdireccion().getcalle())
    {
        result = true;
    }
    return result;
}

void ordenarPorEdad(Persona arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j].getedad() > arr[j+1].getedad())
            {
                Persona aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

void ordenarPorComuna(Persona arr[], int n){
    for (int i = 0; i < n; i++){
        for(int j = 0; j<n-i-1; j++){
            if (arr[j].getdireccion().getcomuna() > arr[j+1].getdireccion().getcomuna()){
                Persona aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }       
        }
    }
}

double promedioEdad(Persona arr[], int n){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += arr[i].getedad();
    }
    return static_cast<double>(suma/n);
}