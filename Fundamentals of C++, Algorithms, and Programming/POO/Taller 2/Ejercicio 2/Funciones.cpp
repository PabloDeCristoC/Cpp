#include <iostream>
#include "Alumno.h"

void compararNota(Alumno a1, Alumno a2){
    if(a1.getnota() > a2.getnota()){
        std::cout<<"La nota mayor es la del alumno 1"<<std::endl;
    } else if(a1.getnota() < a2.getnota()){
        std::cout<<"La nota mayor es la del alumno 2"<<std::endl;
    }
    else{
        std::cout<<"Ambas notas son iguales"<<std::endl;
    }
}

Alumno mejorAlumno(Alumno arr[], int n){
    Alumno notamayor = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i].getnota() > notamayor.getnota()){
            notamayor = arr[i];
        }
    }
    return notamayor;
}

double promedioNotas(Alumno arr[], int n){
    double promedio=0;
    double suma=0;
    for (int i = 0; i < n; i++){
        suma += arr[i].getnota() ;
    }
    promedio = static_cast<double>(suma/n);
    return promedio;
}

int contarAprobados(Alumno arr[], int n){
    int aprobados = 0;
    for(int i = 0; i<n; i++){
        if(arr[i].pasaCurso()){
            aprobados++;
        }     
    }
    return aprobados;
}

int mayoresDeEdad(Alumno arr[], int n){
    int mayoresde18 = 0;
    for (int i = 0; i < n; i++){
        if (arr[i].esMayorDeEdad()){
            mayoresde18++;
        }
    }
    return mayoresde18;
}

