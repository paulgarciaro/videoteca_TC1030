//
// Created by Paul García on 03/06/21.
//
#include "Videos.h"
#include "Episodio.h"
#ifndef PROYECTOINTEGRADOR_SERIE_H
#define PROYECTOINTEGRADOR_SERIE_H


class Serie: public Videos{
private:
    int numTemporadas, numEpisodios;
    double evaluacionF, *calificaciones;
    Episodio *episodios;
    Videos video;
public:
    Serie();
    Serie(Videos video, int numTemporadas, int numEpisodios, Episodio *episodios, double *calificaiones);
    void getEpisodios();
    int getTemporadas();
    void setEpisodios(int, int, int);
    void setTemporadas(int);
    double evaluacionFinal(double *calificaciones);
    void setCalificacion(int numTemporada, double calificacion);

    void mostrar();
};


#endif //PROYECTOINTEGRADOR_SERIE_H
