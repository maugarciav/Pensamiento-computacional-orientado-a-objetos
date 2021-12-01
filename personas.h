/*
 *
 * TC1033 Pensamiento Computacional Orientado a Objetos
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 *
 */


/*
 * Descripcion: Contiene los metodos genéricos para el manejo de
 * las personas se encuentra la clase padre Personas la cual tiene
 * 3 clases hijos, Jugador, Publico y Staff.
 *
*/


#ifndef PROYECTOFINAL_PERSONAS_H
#define PROYECTOFINAL_PERSONAS_H
#include <string>


using namespace std;

//Declaracion de clase Personas que es abstracta
class Personas{
protected:
    //Declaro variables de instancia
    string nombre;
    bool covid;

public:
    //Declaro los métodos que va a tener el objeto
    Personas(){};
    Personas(string nombre, bool covid);


    string get_nombre();
    bool get_covid();
    void set_nombre(string);


};

/*
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param int nom: el nombre de la persona, bool cov: estatus covid
 * @return
*/
Personas::Personas(string nom, bool cov) {
    nombre = nom;
    covid = cov;
}


/*
 * getter nombre
 *
 * @param
 * @return string : nombre de la persona
*/
string Personas::get_nombre() {
    return nombre;
}


/*
 * getter covid
 *
 * @param
 * @return bool: estado de la persona
*/
bool Personas::get_covid() {
    return covid;
}


/*
 * setter nombre
 *
 * @param string nom : nombre de la persona
 * @return
*/
void Personas::set_nombre(string nom) {
    nombre = nom;
}




//Declaro objeto Jugador que hereda de Personas
class Jugador: public Personas{
private:
    //Variables de instancia del objeto
    int id;
public:
    //Metodos del objeto
    Jugador(){};
    Jugador(string nombre, int id, bool covid);


    int get_id();
    void set_id(int);

};


/*
 * Constructor que recibe nombre, id y covid
 *
 * @param string nom: nombre del Jugador, int _id: id, bool co: covid
 * @return Objeto Jugador
*/
Jugador::Jugador(string nom, int _id, bool co) {
    nombre = nom;
    id = _id;
    covid = co;
}


/*
 * getter id
 *
 * @param
 * @return int: id del Juagdor
*/
int Jugador::get_id() {
    return id;
}

/*
 * setter id
 *
 * @param int: _id
 * @return
*/
void Jugador::set_id(int _id) {
    id = _id;
}



//Declaro objeto Publico que hereda de Personas
class Publico: public Personas{
private:
    //Declaro las variables de instancia
    int edad;
public:
    //Metodos del objeto
    Publico(){};
    Publico(string nombre, int edad, bool covid);


    int get_edad();
    void set_edad(int);
    int precio();

};

/*
 * Constructor que recibe nombre, edad y covid
 *
 * @param string nom: nombre del Publico, int edad: edad,
 *        bool co: estado del Publico
 * @return Objeto Publico
*/
Publico::Publico(string nom, int ed, bool co) {
    nombre = nom;
    edad = ed;
    covid = co;
}


/*
 * getter edad
 *
 * @param
 * @return int: edad del Publico
*/
int Publico::get_edad() {
    return edad;
}

/*
 * setter id
 *
 * @param int:ed
 * @return
*/
void Publico::set_edad(int ed) {
    edad = ed;
}

/*
 * Metodo que calcula el precio por la entrada
 * en base a la edad del Publico
 *
 * @param
 * @return int: precio
*/
int Publico ::precio(){
    if (edad > 14){
        return 30;
    }
    else{
        return 0;
    }
}



//Declaro el objeto Staff que hereda de Personas
class Staff: public Personas{
private:
    //Variables de instancia del objeto
    string area;
    float horas;

public:
    //Metodos del objeto
    Staff(){};
    Staff(string nombre, string area, float horas, bool covid);


    string get_area();
    float get_horas();

    void set_area(string);
    void set_horas(float);

    void agregarhoras(float);

};

/*
 * Constructor que recibe nombre, area, horas y co
 *
 * @param string nom: nombre del Staff, string area: area donde
 *         trabaja, float horas: horas trabajadas, bool co: estado
 * @return Objeto Staff
*/
Staff::Staff(string nom, string ar, float hor, bool co) {
    nombre = nom;
    area = ar;
    horas = hor;
    covid = co;
}


/*
 * getter area
 *
 * @param
 * @return string: area del Staff
*/
string Staff::get_area() {
    return area;
}

/*
 * getter horas
 *
 * @param
 * @return float: horas del Staff
*/
float Staff::get_horas() {
    return horas;
}


/*
 * setter area
 *
 * @param string: area del Staff
 * @return
*/
void Staff::set_area(string ar) {
    area = ar;
}

/*
 * setter horas
 *
 * @param float: horas trabajadas del Staff
 * @return
*/
void Staff::set_horas(float hor) {
    horas = hor;
}

/*
 * Metodo que suma las horas ya acomuladas
 * mas horas nuevas trabajadas
 *
 * @param
 * @return int: edad del Publico
*/
void Staff::agregarhoras(float hor) {
    horas = horas + hor;
}




#endif //PROYECTOFINAL_PERSONAS_H
