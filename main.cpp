/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */


#include <iostream>
#include "Torneo.h"

using namespace std;


void menu() {

    cout << "Menu:\n";
    cout << "1. Registrar Jugador \n";
    cout << "2. Registrar Publico \n";
    cout << "3. Registrar Staff \n";
    cout << "4. Registrar Equipo \n";
    cout << "5. Ver Jugadores registrados\n";
    cout << "6. Ver Publico registrado\n";
    cout << "7. Ver Staff registrado\n";
    cout << "8. Ver Equipos registrados \n";
    cout << "9. Buscar Jugador \n";
    cout << "10. Buscar persona en el Publico \n";
    cout << "11. Buscar persona en Staff \n";
    cout << "12. Actualizar ranking de Equipo \n";
    cout << "13. Agregar horas de trabajo para Staff \n";
    cout << "14. Mostrar horas trabajadas Staff \n";
    cout << "15. Salir \n";

}

int main(){
    Torneo j1;
    Torneo p1;
    Torneo s1;
    Torneo e1;

    int opcion = 0;
    string nom, area, coach, co;
    int id, edad, ranking;
    float horas;
    bool continua = true;

    while (continua == true) {
        cout << endl;
        menu();
        cout << endl << "Opcion: ";
        cin >> opcion;

        if(opcion == 1){
            cout << "Nombre: ";
            cin >> nom;
            cout << "ID: ";
            cin >> id;
            cout << "¿Has estado en contacto con alguien con Covid en "
                    "los ultimos 14 dias? si/no: ";
            cin >> co;
            if (co == "si"){
                j1.registrar_jugador(nom, id, true);
            }
            else{
                j1.registrar_jugador(nom, id, false);
            }

        }
        else if(opcion == 2){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Edad: ";
            cin >> edad;
            cout << "¿Has estado en contacto con alguien con Covid en "
                    "los ultimos 14 dias? si/no: ";
            cin >> co;
            if(co == "si"){
                p1.registar_publico(nom, edad, true);
            }
            else{
                p1.registar_publico(nom, edad, false);
            }

        }
        else if(opcion == 3){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Area: ";
            cin >> area;
            cout << "Horas Trabajadas: ";
            cin >> horas;
            cout << "¿Has estado en contacto con alguien con Covid en "
                    "los ultimos 14 dias? si/no: ";
            cin >> co;
            if(co == "si"){
                s1.registar_staff(nom, area, horas, true);
            }
            else{
                s1.registar_staff(nom, area, horas, false);
            }
        }
        else if(opcion == 4){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Coach: ";
            cin >> coach;
            cout << "Ranking: ";
            cin >> ranking;
            e1.registrar_equipo(nom, coach, ranking);
        }
        else if(opcion == 5){
            j1.ver_jugadores();
        }
        else if(opcion == 6){
            p1.ver_publico();
        }
        else if(opcion == 7){
            s1.ver_staff();
        }
        else if(opcion == 8){
            e1.ver_equipos();
        }
        else if(opcion == 9){
            cout << "Nombre del Jugador: ";
            cin >> nom;
            j1.buscar_jugador(nom);
        }
        else if(opcion == 10){
            cout << "Nombre de la Persona: ";
            cin >> nom;
            p1.buscar_publico(nom);
        }
        else if(opcion == 11){
            cout << "Nombre de Staff: ";
            cin >> nom;
            s1.buscar_staff(nom);
        }
        else if(opcion == 12){
            cout << "Equipo: ";
            cin >> nom;
            cout << "Nuevo ranking: ";
            cin >> ranking;
            e1.actualizar_ranking(nom, ranking);
        }
        else if(opcion == 13){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Tiempo: ";
            cin >> horas;
            s1.agregar_horas(nom, horas);
        }
        else if (opcion == 14){
            cout << "Nombre de Staff: ";
            cin >> nom;
            s1.ver_horas(nom);
        }
        else if (opcion == 15){
            continua = false;
            cout << "Adios" << endl;

        }
        else{
            cout << "Opcion invalida";
        }

    }
    return 0;
}
