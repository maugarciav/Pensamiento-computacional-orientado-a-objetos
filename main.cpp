/*
 * Proyecto Torneo ABE
 * Created by Mauricio Garcia
 * A01704098
 */

/*
 * Descripcion: este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos, el programa lleva un registro
 * de las personas de el tipo de personas que entran a las intalaciones
 * para un torneo.
*/

//Bibliotecas
#include <iostream>
#include "Torneo.h" //Donde se crean los objetos

using namespace std;

//Procedimiento menu
void menu() {

    //Opciones del menu
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
//un ciclo para que siempre tenga una opcion a menos que la opcion sea salir
    while (continua == true) {
        cout << endl;
        //imprime el menu
        menu();
        cout << endl << "Opcion: ";
        cin >> opcion; // pide la opcion


        //Opcion 1, registrar a un jugador
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

        //opcion 2 registrar al publico
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

        //opcion 3 registrar a alguien de staff
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

        //opcion 4 registrar a un equipo
        else if(opcion == 4){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Coach: ";
            cin >> coach;
            cout << "Ranking: ";
            cin >> ranking;
            e1.registrar_equipo(nom, coach, ranking);
        }

        // opcion 5 ver la lista de los jugadores registrados
        else if(opcion == 5){
            j1.ver_jugadores();
        }

        //opcion 6 ver la lista de publico que fue registrado
        else if(opcion == 6){
            p1.ver_publico();
        }

        //opcion 7 ver la lista de el staff registrado
        else if(opcion == 7){
            s1.ver_staff();
        }

        //opcion 8 ver la lista de los equipos registrados
        else if(opcion == 8){
            e1.ver_equipos();
        }

        // opcion 9 buscar a un jugador
        else if(opcion == 9){
            cout << "Nombre del Jugador: ";
            cin >> nom;
            j1.buscar_jugador(nom);
        }

        //opcion 10 buscar a alguien en el publico
        else if(opcion == 10){
            cout << "Nombre de la Persona: ";
            cin >> nom;
            p1.buscar_publico(nom);
        }

        //opcion 11 buscar a alguein del staff
        else if(opcion == 11){
            cout << "Nombre de Staff: ";
            cin >> nom;
            s1.buscar_staff(nom);
        }

        //opcion 12 cambiar el ranking de un equipo
        else if(opcion == 12){
            cout << "Equipo: ";
            cin >> nom;
            cout << "Nuevo ranking: ";
            cin >> ranking;
            e1.actualizar_ranking(nom, ranking);
        }

        // opcion 13 agregar horas trabajadas al staff
        else if(opcion == 13){
            cout << "Nombre: ";
            cin >> nom;
            cout << "Tiempo: ";
            cin >> horas;
            s1.agregar_horas(nom, horas);
        }

        //opcion 14 ver las horas trabajadas de alguien del staff
        else if (opcion == 14){
            cout << "Nombre de Staff: ";
            cin >> nom;
            s1.ver_horas(nom);
        }

        //opcion 15 salir, acaba el ciclo
        else if (opcion == 15){
            continua = false;
            cout << "Adios" << endl;

        }
        // valida opciones incorrectas
        else{
            cout << "Opcion invalida";
        }

    }
    return 0;
}
