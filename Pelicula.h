//
// Created by Paul García on 03/06/21.
//
#include "Videos.h"
#ifndef PROYECTOINTEGRADOR_PELICULA_H
#define PROYECTOINTEGRADOR_PELICULA_H

class Pelicula: public Videos{
private:
    double calificacion;

    public:
    Pelicula();
    Pelicula(int id, string nombre, int duracion, string genero, double calificacion);

    void mostrar();
};


#endif //PROYECTOINTEGRADOR_PELICULA_H
