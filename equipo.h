//
// Created by Mauricio Garcia on 27/11/21.
//

#ifndef PROYECTOFINAL_EQUIPO_H
#define PROYECTOFINAL_EQUIPO_H
#include <string>
#include "personas.h"
#include <iostream>

using namespace std;

class Equipo{
private:
    string nombre;
    string coach;
    int ranking;

    int iequipo = 0;
public:
    Equipo(){};
    Equipo(string nom, string coa, int rank): nombre(nom), coach(coa), ranking(rank){};

    //metodos
    void set_nombre(string);
    void set_coach(string);
    void set_ranking(int);

    string get_nombre();
    string get_coach();
    int get_ranking();



};
void Equipo::set_nombre(string nom) {
    nombre = nom;
}
void Equipo::set_coach(string coa) {
    coach = coa;
}
void Equipo::set_ranking(int rank) {
    ranking = rank;
}

string Equipo::get_nombre() {
    return nombre;
}
string Equipo::get_coach() {
    return coach;
}
int Equipo::get_ranking() {
    return ranking;
}



#endif //PROYECTOFINAL_EQUIPO_H
