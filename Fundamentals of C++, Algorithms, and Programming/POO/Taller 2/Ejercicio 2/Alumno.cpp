#include <iostream>
#include "Alumno.h"

//Constructores
Alumno::Alumno(){
    nombre = "";
    edad = 0;
    asignatura = "";
    nota = 0.0;
}
Alumno::Alumno(std::string no, int ed, std::string as, double nt)
: nombre(no), edad(ed), asignatura(as), nota(nt){}
Alumno::Alumno(const Alumno& X){
    nombre = X.nombre;
    edad = X.edad;
    asignatura = X.asignatura;
    nota = X.nota;
}

//Metodos
void Alumno::mostrardatos(){
    std::cout<<"Nombre: "<<nombre<<std::endl;
    std::cout<<"Edad: "<<edad<<std::endl;
    std::cout<<"Asignatura: "<<asignatura<<std::endl;
    std::cout<<"Nota: "<<nota<<std::endl;
}

bool Alumno::pasaCurso(){
    bool result = false;
    if (nota >= 4.0){
        result = true;
    }
    return result;
    
}


