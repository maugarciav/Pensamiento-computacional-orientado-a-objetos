/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */


/*
 * Comentarios:
 * Empece a implementar herencia y composicion, no estoy seguro si lo hice de forma
 * correcta.
 *
 * Al main aun le hacen falta todos los inputs, para que el programa tenga mas sentido
 * a la hora de registrarse
 *
 * En Torneo.h, al mandar a llamar el metodo confirmacion y querer registar un
 * nombre + espacio se crashea, intente usar getline(), pero no me funciono, aun estoy
 * investigadno como hacerlo.
 */

#include <iostream>
#include "Torneo.h"



using namespace std;


int main() {

       Torneo j1;
       j1.agregar_jugador("Mauricio", 4902);
       j1.agregar_jugador("Albert", 4912);
       j1.agregar_jugador("Fernando", 2144);
       j1.lista_jugadores();

       cout << endl;


       Torneo p1;
       p1.agregar_publico("Rafael", 43);
       p1.agregar_publico("Erika", 14);
       p1.lista_publico();



       cout << endl;



       Torneo s1;
       s1.agregar_staff("Chuy", "Seguridiad", 3541);
       s1.agregar_staff("Maria", "Arbitraje", 3533);
       s1.lista_staff();


       cout << endl;


    return 0;
}
