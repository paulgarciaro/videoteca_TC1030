//
// Created by Paul García on 03/06/21.
//

#include "Videos.h"
#include <iostream>

Videos::Videos() {
    id = 0000;
    duracion = 0;
    nombre = "Desconocido";
    genero = "Desconocido";
}

Videos::Videos(int id, string nombre, int duracion, string genero) {
    this -> id = id;
    this -> nombre = nombre;
    this -> duracion = duracion;
    this -> genero = genero;
}

int Videos::getId() {
    return id;
}

string Videos::getNombre() {
    return nombre;
}

int Videos::getDuracion() {
    return duracion;
}

string Videos::getGenero() {
    return genero;
}

void Videos::setId(int id) {
    this -> id = id;
}

void Videos::setNombre(string nombre) {
    this -> nombre = nombre;
}

void Videos::setDuracion(int duracion) {
    this -> duracion = duracion;
}

void Videos::setGenero(string genero) {
    this -> genero = genero;
}

void Videos::mostrar(){
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Genero: " << genero << endl;
}