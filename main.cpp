/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */

#include <iostream>
#include "Torneo.h"



using namespace std;


int main() {

    Torneo j1;
    j1.agregar_jugador("Mau", 4902);
    j1.agregar_jugador("Albert", 4912);
    j1.agregar_jugador("fernando", 2144);


    j1.lista_jugadores();

    cout << endl;

    Torneo p1;
    p1.agregar_publico("Rafael Eugenio", 43);
    p1.agregar_publico("Erika Villanueva", 14);
    p1.lista_publico();

    cout << endl;
    Torneo s1;
    s1.agregar_staff("Chuy", "Seguridiad", 3541);
    s1.agregar_staff("Maria", "Arbitraje", 3533);
    s1.lista_staff();


    cout << endl;


    return 0;

}
