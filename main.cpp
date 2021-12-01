/*
 *
 * TC1033 Pensamiento Computacional Orientado a Objetos
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 *
 */

/*
 * Descripcion: este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que lleva un registro
 * de las personas (Jugadores, Publico, Staff) que entran a las intstalaciones,
 * el programa permite agregar, y buscar personas. También se pueden registar
 * equipos.
*/

//Bibliotecas
#include <iostream>  //para imprimir.
#include "Torneo.h" //Donde se crean los objetos.

using namespace std;

//Procedimiento menu
void menu() {

    //Imprime las opciones que va tener el sistema
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
    //Creo las listas vacias para guardar los diferentes objetos
    Torneo j1;
    Torneo p1;
    Torneo s1;
    Torneo e1;

    int opcion = 0;
    string nom, area, coach, co;
    int id, edad, ranking;
    float horas;
    bool continua = true;

    //Ciclo para que el sistema siga correindo mientras no eliga la opcion salir
    while (continua == true) {
        cout << endl;

        //Imprime el menu
        menu();
        cout << endl << "Opcion: ";
        //Pide la opcion al usuario
        cin >> opcion;


        //Opcion 1; Regista Jugador
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
                cout << "No tienes permitido el acceso debido a tu acercameinto con un contagiado de COVID" << endl;

            }
            else{
                j1.registrar_jugador(nom, id, false);
                cout << "Acceso Permitido" << endl;
            }

        }

        //Opcion 2; Registra Publico
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
                cout << "No tienes permitido el acceso debido a tu acercameinto con un contagiado de COVID" << endl;
            }
            else{
                p1.registar_publico(nom, edad, false);
                cout << "Acceso Permitido" << endl;
            }

        }

        //Opcion 3; Registra Staff
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
                cout << "No tienes permitido el acceso debido a tu acercameinto con un contagiado de COVID" << endl;
            }
            else{
                s1.registar_staff(nom, area, horas, false);
                cout << "Acceso Permitido" << endl;
            }
        }

        //Opcion 4; Registra Equipo
        else if(opcion == 4){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Coach: ";
            cin >> coach;
            cout << "Ranking: ";
            cin >> ranking;
            e1.registrar_equipo(nom, coach, ranking);
        }

        //Opcion 5; imprime las personas de tipo Jugador registrados
        else if(opcion == 5){
            j1.ver_jugadores();
        }

        //Opcion 6; imprime las personas de tipo Publico registrados
        else if(opcion == 6){
            p1.ver_publico();
        }

        //Opcion 7; imprime las personas de tipo Staff registradas
        else if(opcion == 7){
            s1.ver_staff();
        }

        //Opcion 8; imprime los Equipos registrados
        else if(opcion == 8){
            e1.ver_equipos();
        }

        //Opcion 9; Busca a un Jugador
        else if(opcion == 9){
            cout << "Nombre del Jugador: ";
            cin >> nom;
            j1.buscar_jugador(nom);
        }

        //Opcion 10; Busca a alguien del Publico
        else if(opcion == 10){
            cout << "Nombre de la Persona: ";
            cin >> nom;
            p1.buscar_publico(nom);
        }

        //Opcion 11; Busca a alguein del Staff
        else if(opcion == 11){
            cout << "Nombre de Staff: ";
            cin >> nom;
            s1.buscar_staff(nom);
        }

        //Opcion 12; Cambia el ranking de algun Equipo
        else if(opcion == 12){
            cout << "Equipo: ";
            cin >> nom;
            cout << "Nuevo ranking: ";
            cin >> ranking;
            e1.actualizar_ranking(nom, ranking);
        }

        //Opcion 13; Agrega horas trabajadas a alguien del Staff
        else if(opcion == 13){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Tiempo: ";
            cin >> horas;
            s1.agregar_horas(nom, horas);
        }

        //Opcion 14; imprime las horas trabajadas de alguien del Staff
        else if (opcion == 14){
            cout << "Nombre de Staff: ";
            cin >> nom;
            s1.ver_horas(nom);
        }

        //Opcion 15; Sale del ciclo
        else if (opcion == 15){
            continua = false;
            cout << "Adios" << endl;

        }
        //Valida opciones incorrectas
        else{
            cout << "Opcion invalida" << endl;
        }

    }
    return 0;
}
