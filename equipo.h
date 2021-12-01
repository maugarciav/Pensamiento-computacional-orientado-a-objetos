/*
 *
 * TC1033 Pensamiento Computacional Orientado a Objetos
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 *
 */


/*
 * Descripcion: Se encuentra la clase Equipo y sus metodos
 * de manejo
*/


#ifndef PROYECTOFINAL_EQUIPO_H
#define PROYECTOFINAL_EQUIPO_H
#include <string>
#include <iostream>

using namespace std;

//Declaracion de clase Equipo
class Equipo{
private:
    //Declaro variables de instancia
    string nombre;
    string coach;
    int ranking;


public:
    //Declaro los métodos que va a tener el objeto
    Equipo(){};
    Equipo(string nom, string coa, int rank): nombre(nom), coach(coa), ranking(rank){};


    void set_nombre(string);
    void set_coach(string);
    void set_ranking(int);

    string get_nombre();
    string get_coach();
    int get_ranking();

};


/*
 * setter nombre
 *
 * @param string: nombre del equipo
 * @return
*/
void Equipo::set_nombre(string nom) {
    nombre = nom;
}

/*
 * setter coach
 *
 * @param string: nombre del coach
 * @return
*/
void Equipo::set_coach(string coa) {
    coach = coa;
}

/*
 * setter ranking
 *
 * @param int: ranking del equipo
 * @return
*/
void Equipo::set_ranking(int rank) {
    ranking = rank;
}



/*
 * getter nombre
 *
 * @param
 * @return string: nombre del equipo
*/
string Equipo::get_nombre() {
    return nombre;
}


/*
 * getter coach
 *
 * @param
 * @return strong: nombre del coach
*/
string Equipo::get_coach() {
    return coach;
}



/*
 * getter ranking
 *
 * @param
 * @return int: ranking del equipo
*/
int Equipo::get_ranking() {
    return ranking;
}



#endif //PROYECTOFINAL_EQUIPO_H
