#include <iostream>
#include <string>
#include "Alumno.h"

int main(){
    std::string no;
    int ed;
    std::string as;
    double nt;
    int n;

    std::cout<<"Ingrese la cantidad de alumnos: "; std::cin>>n; std::cin.ignore();
    Alumno arr[n]; 

    for (int i = 0; i < n; i++)
    {
        std::cout<<"Ingrese el Nombre: ";
        std::getline(std::cin, no);

        std::cout<<"Ingrese la Edad: ";
        std::cin>>ed; std::cin.ignore();

        std::cout<<"Ingrese la Asignatura: ";
        std::getline(std::cin, as);

        std::cout<<"Ingrese la nota "<<i+1<<": ";
        std::cin>>nt; std::cin.ignore();

        arr[i] = Alumno(no, ed, as, nt);
    }

    std::cout << "\n=== RESULTADOS ===" << std::endl;
    std::cout << "Promedio de notas: " << promedioNotas(arr, n) << std::endl;
    std::cout << "Aprobados: " << contarAprobados(arr, n) << std::endl;
    std::cout << "Mayores de edad: " << mayoresDeEdad(arr, n) << std::endl;

    Alumno mejor = mejorAlumno(arr, n);
    std::cout << "\nMejor alumno:" << std::endl;
    mejor.mostrardatos();

    return 0;
}