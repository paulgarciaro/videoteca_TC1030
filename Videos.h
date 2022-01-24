//
// Created by Paul García on 03/06/21.
//
#include <string>
using namespace std;
#ifndef PROYECTOINTEGRADOR_VIDEOS_H
#define PROYECTOINTEGRADOR_VIDEOS_H


class Videos {
protected:
    int id, duracion;
    string nombre, genero;
public:
    Videos();
    Videos(int id, string nombre, int duracion, string genero);
    int getId();
    string getNombre();
    int getDuracion();
    string getGenero();
    void setId(int);
    void setNombre(string);
    void setDuracion(int);
    void setGenero(string);

    void mostrar();
};


#endif //PROYECTOINTEGRADOR_VIDEOS_H
