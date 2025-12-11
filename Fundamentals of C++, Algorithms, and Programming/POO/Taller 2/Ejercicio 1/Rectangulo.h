#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo{
    private:
    double largo;
    double ancho;
    public:

    //Constructores
    Rectangulo();
    Rectangulo(double, double);
    Rectangulo(const Rectangulo&);

    //Setters y Getters
    void setlargo(double la){largo = la;}
    void setancho(double an){ancho = an;}
    double getlargo(){return largo;}
    double getancho(){return ancho;}

    //Metodos
    double area();
    double perimetro();

    //Presentar
    void Presenta();
};

//Aca va el prototipo de funcion externa
void Presenta(Rectangulo r);

#endif