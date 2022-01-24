#include <iostream>
#include "Videoteca.h"
#include <string>
using namespace std;
int main() {

    Videos v1(11, "Dynasty", 3, "Drama");
    Episodio ep1("Casi no te reconocí", 1);
    Episodio ep2("Escúpela", 1);
    Episodio ep3("Todo debe terminar", 2);
    Episodio ep4("Barco de víboras", 2);

    Episodio *episodios = new Episodio[4];
    episodios[0] = ep1;
    episodios[1] = ep2; 
    episodios[2] = ep3;
    episodios[3] = ep4;

    double *calificaciones = new double[2];
    calificaciones[0] = 8.9;
    calificaciones[1] = 9.5;

    Serie s1(v1, 2, 4, episodios, calificaciones);

    //DATOS DE LA SERIE 2

    Videos v2(12, "Suits", 9, "Drama");
    Episodio epa("Errores y omisiones", 1);
    Episodio epb("Vía rápida", 1);
    Episodio epc("Ella lo sabe", 2);
    Episodio epd("La decisión", 2);

    Episodio *episodios2 = new Episodio[4];
    episodios2[0] = epa;
    episodios2[1] = epb; 
    episodios2[2] = epc;
    episodios2[3] = epd;

    double *calificaciones2 = new double[2];
    calificaciones2[0] = 6.1;
    calificaciones2[1] = 9.0;

    Serie s2(v2, 2, 4, episodios2, calificaciones2);

    //array series
    Serie *series = new Serie[2];
    series[0] = s1;
    series[1] = s2; 


    Pelicula p1(21, "A Fall from Grace", 2, "Drama, Thriller", 9.5);
    Pelicula p2(22, "Violet & Finch", 2, "Melodrama", 8.6);
    
    Pelicula *peliculas = new Pelicula[2];
    peliculas[0] = p1;
    peliculas[1] = p2; 

    Videoteca videotec(peliculas, 2, series, 2);
    videotec.mostrar();

    return 0;
}
