#include "Usuario.h"
#include "Seguridad.h"
#include <iostream>
#include <string>

void mostrarCaducados(Usuario arr[], int n, std::string hoy){
    for(int i=0; i<n; i++){
        if (arr[i].getseguridad().getFechaCaducidad() < hoy)
        {
            std::cout<<"El nombre es: "<<arr[i].getnombre();
            std::cout<<"El rut es: "<<arr[i].getrut();
            std::cout<<"El departamento es: "<<arr[i].getdepartamento();
        }
    }
}

void buscarPorSistema(Usuario arr[], int n, std::string sistema){
    bool result = false;
    for(int i=0; i<n;i++){
        if(arr[i].getseguridad().getsistema() == sistema){
            std::cout << "Usuario con acceso al sistema " << sistema << ":" << std::endl;
            std::cout << "Nombre: " << arr[i].getnombre() << std::endl;
            std::cout << "RUT: " << arr[i].getrut() << std::endl;
            std::cout << "Departamento: " << arr[i].getdepartamento() << std::endl;
            result = true;
        }
    }
    if(!result){
        std::cout<<"No se han encontrado usuarios con acceso a ese sistema"<<std::endl;
    }
}

void buscarPorDepartamento(Usuario arr[], int n, std::string departamento){
    bool encontrado = false;
    for(int i=0; i<n;i++){
        if(arr[i].getdepartamento()==departamento){
            std::cout << "Usuario con acceso al departamento " << departamento << ":" << std::endl;
            std::cout << "Nombre: " << arr[i].getnombre() << std::endl;
            std::cout << "RUT: " << arr[i].getrut() << std::endl;
            std::cout << "Departamento: " << arr[i].getdepartamento() << std::endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        std::cout<<"No hay usuarios encontrados con ese departamento"<<std::endl;
    }
}

int contarAccesos(Usuario arr[], int n, std::string sistema){
    int cont=0;
    for(int i=0;i<n;i++){
        if(arr[i].getseguridad().getsistema()==sistema){
            cont++;
        }
    }
    return cont;
}

int usuarioConClave(Usuario arr[], int n, std::string clave){
    for(int i=0; i<n; i++){
        if(arr[i].getseguridad().getclave()==clave){
            return i;
        }
    }
    return -1;
}

void renovarAccesos(Usuario arr[], int n, std::string nuevaFecha){
    for(int i=0; i<n; i++){
        Seguridad cambiofecha = arr[i].getseguridad();
        cambiofecha.setFechaCaducidad(nuevaFecha);
        arr[i].setseguridad(cambiofecha);
    }
}

int usuarioMasAntiguo(Usuario arr[], int n){
    int indicemasantiguo=0;
    std::string fechamenor = arr[0].getseguridad().getFechaCaducidad();

    for(int i=0; i<n; i++){
        if(arr[i].getseguridad().getFechaCaducidad()<fechamenor){
            fechamenor = arr[i].getseguridad().getFechaCaducidad();
            indicemasantiguo = i;
        }
    }
}

void mostrarSeguridades(Usuario arr[], int n){
    for (int i = 0; i < n; i++){
        std::cout<<"-----------------------------"<<std::endl;
        std::cout<<"Sistema: "<<arr[i].getseguridad().getsistema()<<std::endl;
        std::cout<<"Usuario: "<<arr[i].getseguridad().getusuario()<<std::endl;
        std::cout<<"Fecha de caducidad: "<<arr[i].getseguridad().getFechaCaducidad()<<std::endl;
        std::cout<<"-----------------------------"<<std::endl;
    }
}

bool validadlogin(Usuario u, std::string usuario, std::string clave){
    bool result = false;
    if (u.getseguridad().getusuario()==usuario && u.getseguridad().getclave()==clave){
        result = true;
    }
    return result;
}

int filtrarActivos(Usuario arr[], int n, std::string hoy){
    int posicion = 0;
    for(int i=0;i<n;i++){
        if (arr[i].getseguridad().getFechaCaducidad() >= hoy)
        {
            arr[posicion] = arr[i];
            posicion++;
        }
    }
    return posicion;
}