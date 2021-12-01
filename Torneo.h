/*
 *
 * TC1033 Pensamiento Computacional Orientado a Objetos
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 *
 */


/*
 * Descripcion: Clase Toreno, maneja grupo de Perosnas, dividios en
 * Jugadores, Publico y Staff
 *
*/

//Bibliotecas
#ifndef PROYECTOFINAL_TORNEO_H
#define PROYECTOFINAL_TORNEO_H
#include "personas.h" // donde se encuentran los objetos (Jugador, publico, staff)
#include "equipo.h" // donde se encuentran objeto (equipo)
#include <iostream>
#include <string>
using namespace std;



class Torneo{
private:
    //Declara las variables de instancia
    Jugador players[120];
    Publico people[300];
    Staff sstaff[70];
    Equipo teams[10];

    int ij = 0, ip= 0, is= 0, ie = 0;

public:
    //Constructor
    Torneo():players(), people(), sstaff(){};

    // Metodos miembros de la clase
    void registrar_jugador(string, int, bool);
    void registar_publico(string, int, bool);
    void registar_staff(string, string, float, bool);
    void registrar_equipo(string, string, int);

    void ver_jugadores();
    void ver_publico();
    void ver_staff();
    void ver_equipos();

    int agregar_horas(string, float);
    int ver_horas(string);

    int buscar_jugador(string);
    int buscar_publico(string);
    int buscar_staff(string);

    int actualizar_ranking(string, int);


};
/*
 * Utiliza el arreglo de players
 * Recibe el nombre, id y covid (estado)
 * Crea el objeto Jugador y lo agrega al arreglo Players
 *
 * @param
 * @return
 */
void Torneo::registrar_jugador(string nom, int _id, bool co) {
    //verifica que no haya tenido contacto con alguien cercano al covid
    if (co == false){
        if (ij <= 120){
            Jugador j1(nom, _id, co);
            players [ij] = j1;
            ij++;
        }
        else {
            cout << "Ya no hay espacio" << endl; //e
        }
    }
}


/*
 * Utiliza el arreglo de people
 * Recibe el nombre, edad y covid (estado)
 * Crea el objeto Publico y lo agrega al arreglo people
 *
 * @param
 * @return
 */
void Torneo ::registar_publico(string nom , int ed, bool co) {
    if(co == false){
        if (ip <= 300){
            Publico p1(nom, ed, co);
            people[ip] = p1;
            ip++;
        }
        else{
            cout << "Ya no hay espacio" << endl;
        }
    }
}


/*
 * Utiliza el arreglo de sstaff
 * Recibe el nombre, area, horas y covid (estado)
 * Crea el objeto Staff y lo agrega al arreglo sstaff
 *
 * @param
 * @return
 */
void Torneo::registar_staff(string nom, string ar, float hor, bool co) {
    if(co == false){
        if(is < 70){
            Staff s1(nom, ar, hor, co);
            sstaff[is] = s1;
            is++;
        }
        else {
            cout << "Ya no hay espacio" << endl;
        }
    }
}


/*
 * Utiliza el arreglo de teams
 * Recibe el nombre, coach y ranking
 * Crea el objeto Equipo y lo agrega al arreglo teams
 *
 * @param
 * @return
 */
void Torneo::registrar_equipo(string nom, string coa, int rank) {
    if (ie < 10){
        Equipo e1(nom,coa, rank);
        teams[ie]= e1;
        ie++;
    }
    else {
        cout << "Ya no hay espacio para registrar equipos" << endl;
    }

}


/*
 * Utiliza el arreglo players
 * Recorre el arreglo imprimiedno cada uno de los objetos
 * dentro del mismo
 *
 * @param
 * @return
*/
void Torneo::ver_jugadores() {
    for(int i = 0; i < ij; i++){
        cout << "Nombre: " << players[i].get_nombre() << " //  ID: " << players[i].get_id() << endl;
    }
}



/*
 * Utiliza el arreglo people
 * Recorre el arreglo imprimiedno cada uno de los objetos
 * dentro del mismo
 *
 * @param
 * @return
*/
void Torneo::ver_publico() {
    for(int i = 0; i < ip; i++){
        cout << "Nombre: " << people[i].get_nombre() << "  //  Edad: " << people[i].get_edad()
             << "  //  Precio: " << people[i].precio() << endl;
    }
}



/*
 * Utiliza el arreglo sstaff
 * Recorre el arreglo imprimiedno cada uno de los objetos
 * dentro del mismo
 *
 * @param
 * @return
*/
void Torneo::ver_staff() {
    for(int i = 0; i < is; i++){
        cout << "Nombre: " << sstaff[i].get_nombre() << "  //  Area: " << sstaff[i].get_area()
             << "  //  Horas trabajadas: " << sstaff[i].get_horas() <<"h" << endl;
    }
}

/*
 * Utiliza el arreglo teams
 * Recorre el arreglo imprimiedno cada uno de los objetos
 * dentro del mismo
 *
 * @param
 * @return
*/
void Torneo::ver_equipos() {
    for(int i = 0; i < ie; i++){
        cout << "EQUIPO: " << teams[i].get_nombre() << "  // Coach: " << teams[i].get_coach()
             << "  //  Ranking: " << teams[i].get_ranking() << endl;
    }
}



/*
 * Utiliza el arreglo sstaff
 * Recorre el arreglo hasta encontrar el nombre
 * y le agrega las horas trabajadas
 *
 * @param string nom: nombre del Staff, float hor: horas
 * que se quieren agregar
 * @return 0
*/
int Torneo::agregar_horas(string nom, float hor) {
    for(int i = 0; i < is; i++){
        if (sstaff[i].get_nombre() == nom){
            sstaff[i].agregarhoras(hor);
            return 0;
        }
    }
    cout << "La persona no esta registrada" << endl;

}




/*
 * Utiliza el arreglo sstaff
 * Recorre el arreglo hasta encontrar el nombre
 * e imprime las horas trabajadas
 *
 * @param string nom: nombre del Staff
 * @return 0
*/
int Torneo::ver_horas(string nom) {
    for(int i = 0; i < is; i++) {
        if (sstaff[i].get_nombre() == nom) {
            cout << sstaff[i].get_horas() <<"h" << endl;
            return 0;
        }
    }
    cout << "La persona no esta registrada" << endl;
}



/*
 * Utiliza el arreglo players
 * Recorre el arreglo hasta encontrar el nombre
 * e imprime si el jugador esta o no registrado
 *
 * @param string nom: nombre del Jugador
 * @return 0
*/
int Torneo::buscar_jugador(string nom) {
    for(int i = 0; i < ij; i++){
        if (players[i].get_nombre() == nom){
            cout << "El jugador ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "El jugador NO esta registrad@" << endl;

}


/*
 * Utiliza el arreglo people
 * Recorre el arreglo hasta encontrar el nombre
 * e imprime si la persona esta o no registrado
 *
 * @param string nom: nombre del Publico
 * @return 0
*/
int Torneo::buscar_publico(string nom) {
    for(int i = 0; i < ip; i++){
        if(people[i].get_nombre() == nom){
            cout << "Ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "No esta registrad@" << endl;
}



/*
 * Utiliza el arreglo sstaff
 * Recorre el arreglo hasta encontrar el nombre
 * e imprime si el Staff esta o no registrado
 *
 * @param string nom: nombre del Staff
 * @return 0
*/
int Torneo::buscar_staff(string nom) {
    for(int i = 0; i < is; i++){
        if(sstaff[i].get_nombre() == nom){
            cout << "Ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "No esta registrad@" << endl;
}


/*
 * Utiliza el arreglo teams
 * Recorre el arreglo hasta encontrar el nombre
 * y modifica el ranking
 *
 * @param string equ: nombre del equipo, int rank: nuevo
 * ranking
 * @return 0
*/
int Torneo::actualizar_ranking(string equ, int rank) {
    for(int i = 0; i < ie; i++){
        if(teams[i].get_nombre() == equ){
            teams[i].set_ranking(rank);
            return 0;
        }
    }
    cout << "El equipo no esta regitrado" << endl;

}



#endif //PROYECTOFINAL_TORNEO_H
