//
// Created by Paul García on 03/06/21.
//

#include "Videoteca.h"
#include <iostream>

Videoteca::Videoteca(){
    this -> series = new Serie[1];
    this -> peliculas = new Pelicula[1];
    this -> npeliculas=0;
    this -> nseries=0;
}

Videoteca::Videoteca(Pelicula *peliculas, int npeliculas, Serie *series, int nseries){
    this -> peliculas= peliculas;
    this -> npeliculas= npeliculas;
    this -> series= series;
    this -> nseries= nseries;
}

void Videoteca::mostrar(){
    for(int i=0; i<npeliculas; i++){
        peliculas[i].mostrar();
    }
    cout << "____________________________________________";
    for(int i=0; i<nseries; i++){
        series[i].mostrar();
    }
}