/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */


/*
 * Comentarios:
 * En Torneo.h, al mandar a llamar el metodo confirmacion y querer registar un
 * nombre + espacio se crashea, intente usar getline(), pero no me funciono, aun estoy
 * investigadno como hacerlo.
 */

#include <iostream>
#include "Torneo.h"

using namespace std;


void menu() {

    cout << "Menu:\n";
    cout << "1. Registrar Jugador \n";
    cout << "2. Registrar Publico \n";
    cout << "3. Registrar Staff \n";
    cout << "4. Ver lista de Jugadores \n";
    cout << "5. Ver lista de Publcio \n";
    cout << "6. Ver lista de Staff \n";
    cout << "7. Salir \n";
}

int main(){
    Torneo j1;
    Torneo p1;
    Torneo s1;

    int opcion = 0;
    string nom, area;
    int id_edad;
    bool continua = true;

    while (continua == true){
        menu();
        cout << endl << "Opcion: ";
        cin >> opcion;

        if (opcion == 1){
            cout << "Nombre: ";
            cin >> nom;
            cout << "ID: ";
            cin >> id_edad;
            j1.agregar_jugador(nom, id_edad);
        }

        else if (opcion == 2){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Edad: ";
            cin >> id_edad;
            p1.agregar_publico(nom, id_edad);

        }
        else if (opcion == 3){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Area: ";
            cin >> area;
            cout << "ID: ";
            cin >> id_edad;
            s1.agregar_staff(nom,area, id_edad);


        }
        else if (opcion == 4){
            j1.lista_jugadores();
        }

        else if (opcion == 5){
            p1.lista_publico();
        }

        else if (opcion == 6){
            s1.lista_staff();
        }

        else if(opcion == 7){
            continua = false;
            cout << "ADIOS" << endl;
        }

        else{
            cout << "Opcion invalida" << endl;
        }


    }
}
