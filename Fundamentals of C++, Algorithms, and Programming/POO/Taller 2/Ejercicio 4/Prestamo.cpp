#include "Prestamo.h"
#include <iostream>

Prestamo::Prestamo(){
    codigoLibro = 0000;
    rut = 00000000;
    fechaPrestamo = 00000000;
    fechaDevolucion = 00000000;
    devuelto = 0;
}

Prestamo::Prestamo(int co, int ru, int fep, int fed, bool de)
: codigoLibro(co), rut(ru), fechaPrestamo(fep), fechaDevolucion(fed), devuelto(de){}

Prestamo::Prestamo(const Prestamo& X){
    codigoLibro=X.codigoLibro;
    rut=X.rut;
    fechaPrestamo=X.fechaPrestamo;
    fechaDevolucion=X.fechaDevolucion;
    devuelto=X.devuelto;
}

int Prestamo::diasDeAtraso(int hoy){
    int resta = 0;
    if (hoy > fechaDevolucion && !devuelto){
        resta = hoy-fechaDevolucion;
    }
    return resta;
}

void Prestamo::postergarDevolucion(int dias){
    fechaDevolucion = fechaDevolucion + dias;
}