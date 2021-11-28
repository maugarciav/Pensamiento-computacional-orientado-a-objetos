//
// Created by Mauricio Garcia on 27/11/21.
//

#ifndef PROYECTOFINAL_TORNEO_H
#define PROYECTOFINAL_TORNEO_H
#include "personas.h"
#include "equipo.h"
#include <iostream>
#include <string>
using namespace std;



class Torneo{
private:
    Jugador players[120];
    Publico people[300];
    Staff sstaff[70];
    Equipo teams[10];

    int ij = 0, ip= 0, is= 0, ie = 0;

public:
    Torneo():players(), people(), sstaff(){};

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
int Torneo::registrar_jugador(string nom, int _id, bool co) {
    if (co == false){
        if (ij <= 120){
            Jugador j1(nom, _id, co);
            players [ij] = j1;
            ij++;
            return 0;
        }
        else {
            cout << "Ya no hay espacio" << endl;
        }
    }
}

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

void Torneo::ver_jugadores() {
    for(int i = 0; i < ij; i++){
        cout << "Nombre: " << players[i].get_nombre() << " //  ID: " << players[i].get_id() << endl;
    }
}
void Torneo::ver_publico() {
    for(int i = 0; i < ip; i++){
        cout << "Nombre: " << people[i].get_nombre() << "  //  Edad: " << people[i].get_edad()
             << "  //  Precio: " << people[i].precio() << endl;
    }
}
void Torneo::ver_staff() {
    for(int i = 0; i < is; i++){
        cout << "Nombre: " << sstaff[i].get_nombre() << "  //  Area: " << sstaff[i].get_area()
             << "  //  Horas trabajadas: " << sstaff[i].get_horas() <<"h" << endl;
    }
}
void Torneo::ver_equipos() {
    for(int i = 0; i < ie; i++){
        cout << "EQUIPO: " << teams[i].get_nombre() << "  // Coach: " << teams[i].get_coach()
             << "  //  Ranking: " << teams[i].get_ranking() << endl;
    }
}

int Torneo::agregar_horas(string nom, float hor) {
    for(int i = 0; i < is; i++){
        if (sstaff[i].get_nombre() == nom){
            sstaff[i].agregarhoras(hor);
            return 0;
        }
    }
    cout << "La persona no esta registrada" << endl;

}

int Torneo::ver_horas(string nom) {
    for(int i = 0; i < is; i++) {
        if (sstaff[i].get_nombre() == nom) {
            cout << sstaff[i].get_horas() <<"h" << endl;
            return 0;
        }
    }
    cout << "La persona no esta registrada" << endl;
}

int Torneo::buscar_jugador(string nom) {
    for(int i = 0; i < ij; i++){
        if (players[i].get_nombre() == nom){
            cout << "El jugador ya esta registrad@" << endl;
            return 0; //para acabar el ciclo
        }
    }
    cout << "El jugador NO esta registrad@" << endl;

}

int Torneo::buscar_publico(string nom) {
    for(int i = 0; i < ip; i++){
        if(people[i].get_nombre() == nom){
            cout << "Ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "No esta registrad@" << endl;
}

int Torneo::buscar_staff(string nom) {
    for(int i = 0; i < is; i++){
        if(sstaff[i].get_nombre() == nom){
            cout << "Ya esta registrad@" << endl;
            return 0;
        }
    }
    cout << "No esta registrad@" << endl;
}

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
