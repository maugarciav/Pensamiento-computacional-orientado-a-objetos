/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */


#ifndef PROYECTO_PERSONAS_H
#define PROYECTO_PERSONAS_H
#include <string>


using namespace std;



//Primera clase Jugador
class Jugador{

private:
//Atributos
    string nombre;
    int id;

public:
//Constructores
    Jugador(): nombre(""), id(0){}; //Default
    Jugador(string nom, int _id): nombre(nom), id(_id){};

//Metodos
    void confirmacion();
    string get_Nombre();
    int get_Id();
    void set_Nombre(string);
    void set_Id(int);
};


string Jugador ::get_Nombre() {
    return nombre;
}
int Jugador ::get_Id() {
    return id;
}
void Jugador ::set_Nombre(string nom) {
    nombre = nom;
}
void Jugador ::set_Id(int _id) {
    id = _id;
}
void Jugador :: confirmacion() {
    cout << "Estos son sus datos:\nNombre: " << nombre << "\n" << "Id: " << id << endl;
}








//Segunda clase Publico
class Publico{

private:
//Atributos
    string nombre;
    int edad;

public:
//Constructores
    Publico(): nombre(""), edad(15){}; //Default (Inizializo en 15 para que por default cobre la entrada)
    Publico(string nom, int _edad): nombre(nom), edad(_edad){};

//Metodos
    void precio();
    void confirmacion();
    string get_Nombre();
    int get_Edad();
    void set_Nombre(string);
    void set_Edad(int);

};

string Publico ::get_Nombre() {
    return nombre;
}
int Publico :: get_Edad() {
    return edad;
}
void Publico ::set_Nombre(string nom) {
    nombre = nom;
}
void Publico :: set_Edad(int _edad) {
    edad = _edad;
}
void Publico :: confirmacion() {
    cout << "Estos son sus datos:\nNombre: " << nombre << "\n" << "Edad: " << edad << endl;
}

void Publico ::precio(){
    if (edad > 14){
        cout << "Su entrada tendría un precio de 30 pesos" << endl;
    }
    else{
        cout << "Su entrada es gratuita" << endl;
    }
}






// Tercera clase Staff
class Staff{

private:
//Atributos
    string nombre, area;
    int id;

public:
//Constructores
    Staff(): nombre(""), area(""), id(0){}; //Default
    Staff(string nom, string _area, int _id): nombre(nom), area(_area), id(_id){};

//Metodos
    void confirmacion();
    string get_Nombre();
    string get_Area();
    int get_Id();
    void set_Nombre(string);
    void set_Area(string);
    void set_Id(int);

};


string Staff ::get_Nombre() {
    return nombre;
}
string Staff ::get_Area() {
    return area;
}
int Staff ::get_Id() {
    return id;
}
void Staff ::set_Nombre(string nom) {
    nombre = nom;
}
void Staff ::set_Area(string _area)  {
    area = _area;
}
void Staff ::set_Id(int _id) {
    id = _id;
}
void Staff :: confirmacion() {
    cout << "Estos son sus datos:\nNombre: " << nombre << "\nId: " << id << "\nArea: " << area <<endl;
}







#endif //PROYECTO_PERSONAS_H



