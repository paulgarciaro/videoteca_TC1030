#include "Pelicula.h"
#include "Serie.h"
#ifndef PROYECTOINTEGRADOR_VIDEOTECA_H
#define PROYECTOINTEGRADOR_VIDEOTECA_H


class Videoteca {
    private:
    Serie *series;
    Pelicula *peliculas;
    int nseries, npeliculas;

    public: 
    Videoteca();
    Videoteca(Pelicula *peliculas, int npeliculas, Serie *series, int nseries);

    void mostrar();

};


#endif //PROYECTOINTEGRADOR_VIDEOTECA_H