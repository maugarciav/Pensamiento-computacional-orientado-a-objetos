/*
 * Proyecto Torneo ABE
 * Created by Mauricio Garcia
 * A01704098
 */

/*
 * Descripcion: Contiene los metodos para el manejo de las personas
 * se encuentra la clase padre Personas la cual tiene 3 hijos, jugadores,
 * publico y staff
*/


#ifndef PROYECTOFINAL_PERSONAS_H
#define PROYECTOFINAL_PERSONAS_H
#include <string>


using namespace std;

//clase padre
class Personas{
protected:
    string nombre;
    bool covid; //no hay setters de covid porque este atributo no se puede modificar una vez ingresado

public:
    //constructores
    Personas(){};
    Personas(string nom, bool cov): nombre(nom), covid(cov){};

    //accesor methods
    string get_nombre();
    bool get_covid();
    void set_nombre(string);


};
//metodos
string Personas::get_nombre() { //getter nombre
    return nombre;
}
bool Personas::get_covid() { //getter covid
    return covid;
}
void Personas::set_nombre(string nom) { //setter nombre
    nombre = nom;
}




//subclase Jugador, hija de Personas

class Jugador: public Personas{
private:
    //atributo propio
    int id;
public:
    //constructores
    Jugador(){};
    Jugador(string nombre, int id, bool covid);

    //metodos
    int get_id();
    void set_id(int);


};
Jugador::Jugador(string nom, int _id, bool co) { //constructor
    nombre = nom;
    id = _id;
    covid = co;
}
int Jugador::get_id() { //getter id
    return id;
}
void Jugador::set_id(int _id) { //setter id
    id = _id;
}



//subclase Publico, hijo 2 de Personas
class Publico: public Personas{
private:
    //atributo propio
    int edad;
public:
    //constructores
    Publico(){};
    Publico(string nombre, int edad, bool covid);

    //metodos
    int get_edad();
    void set_edad(int);
    int precio();

};
Publico::Publico(string nom, int ed, bool co) { //constructor
    nombre = nom;
    edad = ed;
    covid = co;
}
int Publico::get_edad() { //getter edad
    return edad;
}
void Publico::set_edad(int ed) { //setter edad
    edad = ed;
}
int Publico ::precio(){ //metodo que regresa el precio que se cobrara segun la edad
    if (edad > 14){
        return 30;
    }
    else{
        return 0;
    }
}



//sub clase staff, hija 3 de Personas
class Staff: public Personas{
private:
    //atributos propios
    string area;
    float horas;

public:
    //constructores
    Staff(){};
    Staff(string nombre, string area, float horas, bool covid);

    //metodos
    string get_area();
    float get_horas();

    void set_area(string);
    void set_horas(float);

    void agregarhoras(float);

};
Staff::Staff(string nom, string ar, float hor, bool co) { //constructor
    nombre = nom;
    area = ar;
    horas = hor;
    covid = co;
}
string Staff::get_area() { //getter area
    return area;
}
float Staff::get_horas() { //getter horas
    return horas;
}
void Staff::set_area(string ar) { //setter area
    area = ar;
}
void Staff::set_horas(float hor) { //setter horas
    horas = hor;
}
void Staff::agregarhoras(float hor) { //metodo que suma las horas trabajadas mas las nuevas horas
    horas = horas + hor;
}


#endif //PROYECTOFINAL_PERSONAS_H
