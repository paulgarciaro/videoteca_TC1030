//
// Created by Paul García on 03/06/21.
//

#include "Pelicula.h"
#include <iostream>

Pelicula::Pelicula(){
    this-> id = 0000;
    this-> duracion = 0;
    this-> nombre = "Desconocido";
    this-> genero = "Desconocido";
}

Pelicula::Pelicula(int id, string nombre, int duracion, string genero, double calificacion){
    this -> id = id;
    this -> nombre = nombre;
    this -> duracion = duracion;
    this -> genero = genero;
    this -> calificacion = calificacion;
}

void Pelicula::mostrar(){
    cout << endl << "DATOS DE PELICULA: " << endl;
    cout <<  "ID: " << this -> id << endl;
    cout << "Nombre: " << this -> nombre << endl;
    cout << "Duracion: " << this -> duracion << endl;
    cout << "Genero: " << this -> genero << endl;
    cout << "Calificación: " << this -> calificacion << endl;
}