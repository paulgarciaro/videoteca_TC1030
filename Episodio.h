//
// Created by Paul García on 07/06/21.
//
#include <string>
using namespace std;
#ifndef PROYECTOINTEGRADOR_EPISODIO_H
#define PROYECTOINTEGRADOR_EPISODIO_H


class Episodio {
private:
    string titulo;
    int numeroTemporada;
public:
    Episodio();
    Episodio(string, int);
    string getTitulo();
    int getNumeroTemporada();
    void setTitulo(string);
    void setNumeroTemporada(int);
};


#endif //PROYECTOINTEGRADOR_EPISODIO_H
