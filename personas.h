/*
 * Proyecto Torneo ABE
 * Mauricio Garcia Villanueva
 * A01704098
 */


#ifndef PROYECTO_PERSONAS_H
#define PROYECTO_PERSONAS_H
#include <string>

using namespace std;

//Clase Padre
class General{
protected:
    string nombre;
    int id_o_edad;
    string cov;
public:
    General(): nombre(""), id_o_edad(0){};
    General(string nombre, int id_o_edad);

    void confirmacion();
    bool covid();
    string get_Nombre();
    int get_Id_o_edad();
    void set_Nombre(string);
    void set_Id_o_edad(int);

};

General::General(string nom, int ie) {
    nombre = nom;
    id_o_edad = ie;
}
void General :: confirmacion() {
    cout << "Estos son sus datos:\nNombre: " << nombre << "\n" << "Id: " << id_o_edad << endl;
}
bool General ::covid() {
    cout << "¿Has estado en contacto con alguien con Covid en "
            "los ultimos 14 dias?  si/no" << endl;
    cin >> cov;
    if(cov == "no" or cov == "No"){
        cout << "Acceso permitido" << endl <<"\n";
        return true;

    }
    else if (cov == "si" or cov == "Si"){
        cout << "Acceso denegado" << endl;
        cout << "No tienes permitido el acceso\n" <<endl;
        return false;
    }
}
string General ::get_Nombre() {
    return nombre;
}
int General ::get_Id_o_edad() {
    return id_o_edad;
}
void General ::set_Nombre(string nom) {
    nombre = nom;
}
void General ::set_Id_o_edad(int ie) {
    id_o_edad = ie;
}




//Primera clase Jugador que hereda de General
class Jugador: public General{

private:
//Atributos heredados

public:
//Constructores
    Jugador(): General(){};//Default
    Jugador(string nombre, int id_o_edad);

//Metodos heredados

};
Jugador::Jugador(string nom, int ie) {
    nombre = nom;
    id_o_edad = ie;
}






//Segunda clase Publico que hereda de General
class Publico : public General{

private:
//Atributos heredados

public:
//Constructores
    Publico(): General(){}; //Default
    Publico(string nombre, int id_o_edad);

//Metodos
    int precio();
    void confirmacion(); //sobrescritura


};
Publico::Publico(string nom, int ie) {
    nombre = nom;
    id_o_edad = ie;
}
void Publico :: confirmacion() {
    cout << "Estos son sus datos:\nNombre: " << nombre << "\n" << "Edad: " << id_o_edad << endl;
}

int Publico ::precio(){
    if (id_o_edad > 14){
        return 30;
    }
    else{
        return 0;
    }
}






// Tercera clase Staff que hereda de General
class Staff: public General{

private:
//Atributos
    string area;

public:
//Constructores
    Staff(): General(), area(""){}; //Default
    Staff(string nombre, string area, int id_o_edad);

//Metodos
    void confirmacion(); //sobreescritura
    string get_Area();
    void set_Area(string);


};
Staff::Staff(string nom, string are, int ie) {
    nombre = nom;
    area = are;
    id_o_edad = ie;
}

string Staff ::get_Area() {
    return area;
}
void Staff ::set_Area(string _area)  {
    area = _area;
}
void Staff :: confirmacion() {
    cout << "Estos son sus datos:\nNombre: " << nombre << "\nId: " << id_o_edad << "\nArea: " << area <<endl;
}




#endif //PROYECTO_PERSONAS_H



