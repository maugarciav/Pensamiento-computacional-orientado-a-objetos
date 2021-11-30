/*
 * Proyecto Toreno ABE
 * Created by Mauricio Garcia
 * A01704098
 */

/*
 * Descripcion: Se encuentra la clase equipo y sus metodos
 * de manejo
*/


#ifndef PROYECTOFINAL_EQUIPO_H
#define PROYECTOFINAL_EQUIPO_H
#include <string>
#include <iostream>

using namespace std;

//Se crea la clase Equipo
class Equipo{
private:
    //Declaracion de atributos
    string nombre;
    string coach;
    int ranking;


public:
    //Constructores
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
void Equipo::set_nombre(string nom) { //setter nombre
    nombre = nom;
}
void Equipo::set_coach(string coa) { // setter coach
    coach = coa;
}
void Equipo::set_ranking(int rank) { //setter ranking
    ranking = rank;
}

string Equipo::get_nombre() { //getter nombre
    return nombre;
}
string Equipo::get_coach() { //getter coach
    return coach;
}
int Equipo::get_ranking() { // getter ranking
    return ranking;
}



#endif //PROYECTOFINAL_EQUIPO_H
