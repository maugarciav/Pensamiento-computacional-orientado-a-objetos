/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */

#include <iostream>
#include "personas.h"
using namespace std;

int main() {

    //Objeto  que manda a llamar metodos de la clase 1
    Jugador j1 ("Mauricio Garcia", 4098); //Inicializamos con ciertos datos
    cout << j1.get_Nombre() << endl;
    cout << j1.get_Id() << endl;

    j1.confirmacion();
    j1.set_Nombre("Ivan Montano");
    j1.set_Id(3020);
    j1.confirmacion();
    cout << endl;


    //Objeto  que manda a llamar metodos de la clase 2
    Publico p1 ("Rafael Garcia", 42);
    cout << p1.get_Nombre() << endl;
    cout << p1.get_Edad() << endl;

    p1.precio();
    p1.set_Nombre("Rafael Jr");
    p1.set_Edad(12);

    cout << p1.get_Nombre() << endl;
    cout << p1.get_Edad() << endl;
    p1.confirmacion();
    p1.precio();
    cout << endl;


    //Objeto  que manda a llamar metodos de la clase 3
    Staff s1 ("Eduardo Lopéz", "Seguridad", 3455);
    cout << s1.get_Nombre() << endl;
    cout << s1.get_Id() << endl;
    cout << s1.get_Area() << endl;

    s1.confirmacion();
    s1.set_Nombre("Fernando Gonzalez");
    s1.set_Id(5193);
    s1.set_Area("Limpieza");
    s1.confirmacion();

    return 0;
}
