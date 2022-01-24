//
// Created by Paul García on 07/06/21.
//
#include "Episodio.h"
Episodio::Episodio(){
    this -> titulo = "Desconocido";
    this -> numeroTemporada = 0;
}

Episodio::Episodio(string titulo, int numeroTemporada) {
    this -> titulo = titulo;
    this -> numeroTemporada = numeroTemporada;
}

string Episodio::getTitulo() {
    return this -> titulo;
}

int Episodio::getNumeroTemporada() {
    return this -> numeroTemporada;
}

void Episodio::setNumeroTemporada(int numeroTemporada) {
    this -> numeroTemporada = numeroTemporada;
}

void Episodio::setTitulo(string titulo) {
    this -> titulo = titulo;
}


