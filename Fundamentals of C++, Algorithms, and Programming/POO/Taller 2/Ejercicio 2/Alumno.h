#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string>

class Alumno{
    private:
    std::string nombre;
    int edad;
    std::string asignatura;
    double nota;
    
    public:

    //Constructores
    Alumno();
    Alumno(std::string, int, std::string, double);
    Alumno(const Alumno&);

    //Setters y Getters
    void setnombre(std::string no){nombre = no;}
    void setedad(int ed){edad = ed;}
    void setasignatura(std::string as){asignatura=as;}
    void setnota(double nt){nota = nt;}
    std::string getnombre(){return nombre;}
    int getedad(){return edad;}
    std::string getasignatura(){return asignatura;}
    double getnota(){return nota;}

    //Metodos
    void mostrardatos();
    bool esMayorDeEdad(){bool result = false; if (edad >= 18){result = true;} return result;}
    bool pasaCurso();
};

void compararNota(Alumno a1, Alumno a2);
Alumno mejorAlumno(Alumno arr[], int n);
double promedioNotas(Alumno arr[], int n);
int contarAprobados(Alumno arr[], int n);
int mayoresDeEdad(Alumno arr[], int n);

#endif