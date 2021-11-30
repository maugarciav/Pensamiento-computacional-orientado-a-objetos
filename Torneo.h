/*
 * Proyecto Toreno ABE
 * Created by Mauricio Garcia
 * A01704098
 */

/*
 * Descripcion: maneja las clases y se almacenan dependiedno del
 * tipo de objeto, Jugador, Publico, Staff o Equipo
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
    //Variables donde se guardan los objetos
    Jugador players[120];
    Publico people[300];
    Staff sstaff[70];
    Equipo teams[10];

    int ij = 0, ip= 0, is= 0, ie = 0;

public:
    //Constructor
    Torneo():players(), people(), sstaff(){};

    //metodos
    int registrar_jugador(string, int, bool);
    int registar_publico(string, int, bool);
    int registar_staff(string, string, float, bool);
    int registrar_equipo(string, string, int);

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
// Crea un objeto de tipo jugador y lo guarda en el arreglo players
int Torneo::registrar_jugador(string nom, int _id, bool co) {
    //verifica que no haya tenido contacto con alguien cercano al covid
    if (co == false){
        //verifica que no exeda la cantidad maxima de jugadores
        if (ij <= 120){
            //crea al jugador
            Jugador j1(nom, _id, co);
            //agrega al arreglo al jugador
            players [ij] = j1;
            ij++;
            return 0;
        }
        else {
            cout << "Ya no hay espacio" << endl; //e
        }
    }
}


// Crea un objeto de tipo Publico y lo guatda en el arreglo people
int Torneo ::registar_publico(string nom , int ed, bool co) {
    if(co == false){
        if (ip <= 300){
            Publico p1(nom, ed, co);
            people[ip] = p1;
            ip++;
            return 0;
        }
        else{
            cout << "Ya no hay espacio" << endl;
        }
    }
}


//Crea un objeto de tipo Staff y lo guarda en el arreglo sstaff
int Torneo::registar_staff(string nom, string ar, float hor, bool co) {
    if(co == false){
        if(is < 70){
            Staff s1(nom, ar, hor, co);
            sstaff[is] = s1;
            is++;
            return 0;
        }
        else {
            cout << "Ya no hay espacio" << endl;
        }
    }
}


//Crea un objeto de tipo Equipo y lo agrega al arreglo teams
int Torneo::registrar_equipo(string nom, string coa, int rank) {
    if (ie < 10){
        Equipo e1(nom,coa, rank);
        teams[ie]= e1;
        ie++;
        return 0;
    }
    else {
        cout << "Ya no hay espacio para registrar equipos" << endl;
    }

}


//Reccorre el arreglo players y va imprimiendo su nombre y su id
void Torneo::ver_jugadores() {
    for(int i = 0; i < ij; i++){
        cout << "Nombre: " << players[i].get_nombre() << " //  ID: " << players[i].get_id() << endl;
    }
}

//Recorre el arreglo people y va imprimiendo su nombre, edad y el precio por su entrada
void Torneo::ver_publico() {
    for(int i = 0; i < ip; i++){
        cout << "Nombre: " << people[i].get_nombre() << "  //  Edad: " << people[i].get_edad()
             << "  //  Precio: " << people[i].precio() << endl;
    }
}

//Recorre el arreglo sstaff y va imprimiedno su nombre, area y las horas trabajadas
void Torneo::ver_staff() {
    for(int i = 0; i < is; i++){
        cout << "Nombre: " << sstaff[i].get_nombre() << "  //  Area: " << sstaff[i].get_area()
             << "  //  Horas trabajadas: " << sstaff[i].get_horas() <<"h" << endl;
    }
}

//Recorre el arreglo teams y va imprimiendo el nombre, el coach y su ranking actual
void Torneo::ver_equipos() {
    for(int i = 0; i < ie; i++){
        cout << "EQUIPO: " << teams[i].get_nombre() << "  // Coach: " << teams[i].get_coach()
             << "  //  Ranking: " << teams[i].get_ranking() << endl;
    }
}


// Recorre el arreglo sstaff hasta encontrar el nombre de la persona a la cual le quieres
// agregar horas de trabajo y le suma las horas agregadas
int Torneo::agregar_horas(string nom, float hor) {
    for(int i = 0; i < is; i++){
        if (sstaff[i].get_nombre() == nom){
            sstaff[i].agregarhoras(hor);
            return 0;
        }
    }
    cout << "La persona no esta registrada" << endl;

}

// Recorre el arreglo staff hasta encontrar el nombre de la persona e imprime sus horas
//trabajadas
int Torneo::ver_horas(string nom) {
    for(int i = 0; i < is; i++) {
        if (sstaff[i].get_nombre() == nom) {
            cout << sstaff[i].get_horas() <<"h" << endl;
            return 0;
        }
    }
    cout << "La persona no esta registrada" << endl;
}


//Recorre el arreglo players hasta encontrar el nombre del jugador que se busca
int Torneo::buscar_jugador(string nom) {
    for(int i = 0; i < ij; i++){
        if (players[i].get_nombre() == nom){
            cout << "El jugador ya esta registrad@" << endl;
            return 0; //para acabar el ciclo
        }
    }
    // De no ser encontrada, significa que el jugador aun no se registra
    cout << "El jugador NO esta registrad@" << endl;

}


//Recorre el arreglo people hasta encontrar el nombre de la persona que se busca
int Torneo::buscar_publico(string nom) {
    for(int i = 0; i < ip; i++){
        if(people[i].get_nombre() == nom){
            cout << "Ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "No esta registrad@" << endl;
}


//Recorre el arreglo sstaff hasta encontrar el nombre del personal de staff que se busca
int Torneo::buscar_staff(string nom) {
    for(int i = 0; i < is; i++){
        if(sstaff[i].get_nombre() == nom){
            cout << "Ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "No esta registrad@" << endl;
}

//Recorre el arreglo hasta encontrar el nombre del equipo que se quiere
//modificar y modifica el ranking
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
