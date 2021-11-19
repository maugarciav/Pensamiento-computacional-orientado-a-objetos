
//
// Created by Mauricio Garcia on 17/11/21.
//

#ifndef PROYECTO_TORNEO_H
#define PROYECTO_TORNEO_H
#include <string>
#include "personas.h"


using namespace std;

class Torneo{
private:
    string lista_j[50];
    string lista_p[100];
    string lista_s[30];
    int numj = 0, nump = 0, nums = 0;
    string resj, resp,  ress;
    string completej, completep, completes;

public:
    //constructor default
    Torneo(): lista_j(), lista_p(), lista_s(){};

    void agregar_jugador(string, int);
    void agregar_publico(string, int);
    void agregar_staff(string, string, int);

    void lista_jugadores();
    void lista_publico();
    void lista_staff();


};

void Torneo ::agregar_jugador(string nom, int id) {
    if (numj < 50){
        Jugador j1 (nom, id);
        Jugador jug = j1;
        j1.confirmacion();
        cout << "Tus datos son correctos? si/no  " <<endl;
        cin >> resj;
        while(resj == "no" or resj == "No" or resj == "NO"){
            cout << "Nombre: ";
            //Nose como hacer para que el cin pueda recibir un nombre completo ya que
            // cuadno pongo un nombre + el espacio se crashea :(
            cin >> nom;
            //getline(cin,nom); nose porque no funciona de esta forma
            j1.set_Nombre(nom);
            cout <<  "ID: ";
            cin >> id;
            j1.set_Id(id);
            cout << "Tus datos son correctos? si/no  " <<endl;
            cin >> resj;
        }

        completej = to_string(numj+ 1) + ". Nombre: " +
                    j1.get_Nombre() + "     //     ID:" + to_string(j1.get_Id()) +
                    "     //     Estatus: Jugador ";
        lista_j[numj] =  completej;
        numj++;

    }
    else{
        cout << "Ya no hay espacio disponible para jugadores" << endl;
    }

}
void Torneo ::lista_jugadores() {
    for (int i = 0; i < numj; i++ ){
        cout << lista_j[i]  <<endl;
    }
}


void Torneo ::agregar_publico(string nom, int ed) {
    if (nump < 100){
        Publico p1 (nom, ed);

        p1.confirmacion();
        cout << "Tus datos son correctos? si/no " <<endl;
        cin >> resp;
        while(resp == "no" or resp == "No" or resp == "NO"){
            cout << "Nombre: ";
            //Nose como hacer para que el cin pueda recibir un nombre completo ya que
            // cuadno pongo un nombre mas el espacio se crashea :(
            cin >> nom;
            //getline(cin,nom);
            p1.set_Nombre(nom);
            cout <<  "Edad: ";
            cin >> ed;
            p1.set_Edad(ed);
            cout << "Tus datos son correctos? si/no = 0  " <<endl;
            cin >> resp;
        }

        completep = to_string(nump+ 1) + ". Nombre: " +
                    p1.get_Nombre() + "     //     Edad:" + to_string(p1.get_Edad())+
                    "     //     Precio: "+ to_string(p1.precio())+
                    " pesos     //     Estatus: Publico";
        lista_p[nump] = completep;
        nump++;
    }
    else{
        cout << "Ya no hay espacio disponible para maás público" << endl;
    }
}
void Torneo ::lista_publico() {
    for (int i = 0; i < nump; i++ ){
        cout << lista_p[i] <<endl;

    }
}


void Torneo :: agregar_staff(string nom, string ar, int id) {
    if (nums < 30){
        Staff s1 (nom, ar, id);

        s1.confirmacion();
        cout << "Tus datos son correctos? si/no  " <<endl;
        cin >> ress;
        while(ress == "no" or ress == "No" or ress == "NO"){
            cout << "Nombre: ";
            //Nose como hacer para que el cin pueda recibir un nombre completo ya que
            // cuadno pongo un nombre mas el espacio se crashea :(
            cin >> nom;
            //getline(cin,nom);
            s1.set_Nombre(nom);
            cout << "Area: ";
            cin >> ar;
            s1.set_Area(ar);
            cout <<  "ID: ";
            cin >> id;
            s1.set_Id(id);
            cout << "Tus datos son correctos? si/no " <<endl;
            cin >> ress;
        }

        completes = to_string(nums+ 1) + ". Nombre: " +
                    s1.get_Nombre() + "     //     ID:" + to_string(s1.get_Id())+
                    "     //     Area: " + s1.get_Area() +  "     //     Estatus: Staff";
        lista_s[nums] = completes;
        nums++;
    }
    else{
        cout << "Los miembros del Staff ya estan completos" << endl;
    }


}
void Torneo ::lista_staff() {
    for (int i = 0; i < nums; i++ ){
        cout << lista_s[i] <<endl;
    }
}





#endif //PROYECTO_TORNEO_H
