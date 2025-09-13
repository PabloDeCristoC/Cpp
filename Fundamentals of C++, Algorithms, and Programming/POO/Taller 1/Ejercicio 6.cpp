//Ejercicio 6

#include <iostream>
#include <string>

class Libro{
    private:
    std::string titulo;
    std::string autor;
    int paginas;
    
    public:

    Libro();

    void settitulo(std::string);
    void setautor(std::string);
    void setpaginas(int);

    std::string gettitulo();
    std::string getautor();
    int getpaginas();

    void ver();

    bool esLargo(int);
};

Libro::Libro(){}


void Libro::settitulo(std::string ti){
    titulo = ti;
}
void Libro::setautor(std::string au){
    autor = au;
}
void Libro::setpaginas(int pa){
    paginas = pa;
}

std::string Libro::gettitulo(){
    return titulo;
}
std::string Libro::getautor(){
    return autor;
}
int Libro::getpaginas(){
    return paginas;
}

void Libro::ver(){
    std::cout<<"Titulo: "<<titulo<<std::endl;
    std::cout<<"Autor: "<<autor<<std::endl;
    std::cout<<"Paginas: "<<paginas<<std::endl;
}

bool Libro::esLargo(int umbral){
    bool result = false;
    if (paginas >= umbral){
        result = true;
    }
    return result;
}

int main(){
    int umbral;
    std::string ti, au;
    int pa;

    std::cout<<"Ingrese el titulo: ";
    std::getline(std::cin, ti);
    std::cout<<"Ingrese el autor: ";
    std::getline(std::cin, au);
    std::cout<<"Ingrese la cantidad de paginas: ";
    std::cin>>pa;
    std::cout<<"Ingrese el umbral de paginas: ";
    std::cin>>umbral;

    Libro L1;
    L1.settitulo(ti);
    L1.setautor(au);
    L1.setpaginas(pa);
    L1.ver();

    if (L1.esLargo(umbral) == true)
    {
        std::cout<<"El libro es largo";
    }
    else{
        std::cout<<"El libro es corto";
    }
    
    return 0;

}