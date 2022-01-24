//
// Created by Paul García on 03/06/21.
//
#include <iostream>
#include <string>
#include "Serie.h"
Serie::Serie() {
    this -> numTemporadas = 0;
    this -> numEpisodios = 0;
    this -> calificaciones = new double[1];
    this -> episodios = new Episodio[1];
    this -> evaluacionF = 0;
}

Serie::Serie(Videos video, int numTemporadas, int numEpisodios, Episodio *episodios, double *calificaciones) {
    this -> video= video;
    this -> numEpisodios = numEpisodios;
    this -> numTemporadas = numTemporadas;
    this -> episodios = episodios;
    this -> calificaciones = calificaciones;
    this -> evaluacionF = evaluacionFinal(calificaciones);
}


void Serie::getEpisodios() {
    int limite = this -> numEpisodios;
    for (int i = 0; i<limite;i++){
        cout << "Episodio " << i+1 << ": ";
        cout << episodios[i].getTitulo() << endl;
        cout << "Temporada " << ": ";
        cout << episodios[i].getNumeroTemporada() << endl;
    }
}

int Serie::getTemporadas(){
    return this -> numTemporadas;
}

void Serie::setEpisodios(int episodioI, int episodioF, int temporada) {
    string t;
    if ((temporada > this-> numTemporadas) || ((episodioF - episodioI)>this->numEpisodios) || (episodioF > numEpisodios)){
        cout << "Numero de temporada o intervalo de episodios incorrecto" << endl;
    }else{
        for (int i = episodioI-1; i<episodioF;i++){
            episodios[i].setNumeroTemporada(temporada);
            cout << "Ingrese el titulo para el episodio " << i+1 << " temporada " << temporada << endl;
            cin >> t;
            episodios[i].setTitulo(t);
        }
    }

}
void Serie::setTemporadas(int numTemporadas) {
    this -> numTemporadas = numTemporadas;
}

void Serie::setCalificacion(int numTemporada, double calificacion) {
    this -> calificaciones[numTemporada] = calificacion;
}
/*
double Serie::evaluacionFinal() {
    int limite = this -> numTemporadas;
    for (int i = 0; i<limite; i++){
        this-> evaluacionF += calificaciones[i];
    }
    this -> evaluacionF = evaluacionF/limite;
    return this -> evaluacionF;
}
*/

double Serie::evaluacionFinal(double *calificaciones){
    double contador = 0;
    for(int i=0 ; i<numTemporadas; i++){
        contador += calificaciones[i];
    }
    evaluacionF= contador/numTemporadas;
    return evaluacionF;
}

void Serie::mostrar(){
    cout << endl;
    cout << "DATOS DE LA SERIE: " << endl;
    video.mostrar();
    cout << "Num temporadas: " << numTemporadas << endl;
    cout << "Num episodios: " << numEpisodios << endl;
    cout << "Evaluacion de las temporadas: " << evaluacionF << endl;
}