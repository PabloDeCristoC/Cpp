#ifndef PRESTAMO_H
#define PRESTAMO_H

class Prestamo{
    private:
    int codigoLibro;
    int rut;
    int fechaPrestamo;
    int fechaDevolucion;
    bool devuelto;

    public:
    Prestamo();
    Prestamo(int, int, int, int, bool);
    Prestamo(const Prestamo&);

    void setcodigoLibro(int co){codigoLibro = co;}
    void setrut(int ru){rut = ru;}
    void setfechaPrestamo(int fep){fechaPrestamo=fep;}
    void setfechaDevolucion(int fed){fechaDevolucion=fed;}
    void setdevuelto(bool de){devuelto=de;}


    int getcodigolibro(){return codigoLibro;}
    int getrut(){return rut;}
    int getfechaPrestamo(){return fechaPrestamo;}
    int getfechaDevolucion(){return fechaDevolucion;}
    bool getdevuelto(){return devuelto;}

    int diasDeAtraso(int hoy); //hoy
    void postergarDevolucion(int dias); //dias
};

void mostrarAtrasados(Prestamo arr[], int n, int hoy);
int contarAtrasados(Prestamo arr[], int n, int hoy);
int totalDiasAtraso(Prestamo arr[], int n, int hoy);
int buscarPrestamoPorCodigo(Prestamo arr[], int n, int codigo);
void buscarPrestamosPorRut(Prestamo arr[], int n, int rut);
void marcarDevuelto(Prestamo &p);
int PrestamoMasAtrasado(Prestamo arr[], int n, int hoy);

#endif