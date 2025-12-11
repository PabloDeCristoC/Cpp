#include <iostream>
#include "Prestamo.h"

void mostrarAtrasados(Prestamo arr[], int n, int hoy){
    for (int i = 0; i < n; i++)
    {
        if (arr[i].diasDeAtraso(hoy)>0){
            std::cout<<"Codigo del libro: "<<arr[i].getcodigolibro()<<std::endl;
            std::cout<<"Rut: "<<arr[i].getrut()<<std::endl;
            std::cout<<"Dias de atraso: "<<arr[i].diasDeAtraso(hoy)<<std::endl;
        }
    }   
}

int contarAtrasados(Prestamo arr[], int n, int hoy){
    int cont=0;
    for (int i = 0; i<n; i++){
        if (arr[i].diasDeAtraso(hoy)>0){
            cont++;
        }
    }
    return cont;
}

int totalDiasAtraso(Prestamo arr[], int n, int hoy){
    int suma=0;
    for(int i=0; i<n; i++){
        if (arr[i].diasDeAtraso(hoy)>0)
        {
            suma += arr[i].diasDeAtraso(hoy);
        }
    }
    return suma;
}

int buscarPrestamoPorCodigo(Prestamo arr[], int n, int codigo){
    for (int i = 0; i<n; i++){
        if (arr[i].getcodigolibro() == codigo){
            return i;
        }
    }
    return -1;
}

void buscarPrestamosPorRut(Prestamo arr[], int n, int rut){
    bool encontrado = false;
    for (int i = 0; i < n; i++){
        if (arr[i].getrut() == rut){
            std::cout<<"Para el rut asociado los prestamos son: "<<arr[i].getcodigolibro()<<std::endl;
            encontrado = true;
        }
    }
    if (!encontrado)
    {
        std::cout<<"El rut no tiene prestamos asociados";
    }
}

void marcarDevuelto(Prestamo &p){
    p.setdevuelto(true);
}

int PrestamoMasAtrasado(Prestamo arr[], int n, int hoy){
    int indicemasatrasado = -1;
    int maxDiasdeAtraso = 0;
    for (int i = 0; i < n; i++){
        int diasAtraso = arr[i].diasDeAtraso(hoy);
        if (diasAtraso > maxDiasdeAtraso)
        {
            maxDiasdeAtraso = diasAtraso;
            indicemasatrasado = i;
        }
    }
    return indicemasatrasado;
}