//
// Created by Mauricio Garcia on 27/11/21.
//

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
    //constructor vacio
    Personas(){};
    Personas(string nom, bool cov): nombre(nom), covid(cov){};

    //accesor methods
    string get_nombre();
    bool get_covid();
    void set_nombre(string);


};
//metodos
string Personas::get_nombre() {
    return nombre;
}
bool Personas::get_covid() {
    return covid;
}
void Personas::set_nombre(string nom) {
    nombre = nom;
}




//subclase jugador

class Jugador: public Personas{
private:
    int id;
public:
    Jugador(){};
    Jugador(string nombre, int id, bool covid);

    //metodos
    int get_id();
    void set_id(int);


};
Jugador::Jugador(string nom, int _id, bool co) {
    nombre = nom;
    id = _id;
    covid = co;
}
int Jugador::get_id() {
    return id;
}
void Jugador::set_id(int _id) {
    id = _id;
}



//subclase Publico
class Publico: public Personas{
private:
    int edad;
public:
    Publico(){};
    Publico(string nombre, int edad, bool covid);

    //metodos
    int get_edad();
    void set_edad(int);
    int precio();

};
Publico::Publico(string nom, int ed, bool co) {
    nombre = nom;
    edad = ed;
    covid = co;
}
int Publico::get_edad() {
    return edad;
}
void Publico::set_edad(int ed) {
    edad = ed;
}
int Publico ::precio(){
    if (edad > 14){
        return 30;
    }
    else{
        return 0;
    }
}



//sub clase staff
class Staff: public Personas{
private:
    string area;
    float horas;

public:
    Staff(){};
    Staff(string nombre, string area, float horas, bool covid);
    string get_area();
    float get_horas();

    void set_area(string);
    void set_horas(float);

    void agregarhoras(float);

};
Staff::Staff(string nom, string ar, float hor, bool co) {
    nombre = nom;
    area = ar;
    horas = hor;
    covid = co;
}
string Staff::get_area() {
    return area;
}
float Staff::get_horas() {
    return horas;
}
void Staff::set_area(string ar) {
    area = ar;
}
void Staff::set_horas(float hor) {
    horas = hor;
}
void Staff::agregarhoras(float hor) {
    horas = horas + hor;
}


#endif //PROYECTOFINAL_PERSONAS_H
