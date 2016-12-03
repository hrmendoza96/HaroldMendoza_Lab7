#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include "Usuario.h"
#include "db_administrador.h"
#include "db_manager.h"
#include "db_intern.h"
#include "db_supervisor.h"


using namespace std;

void menuAdmin();
void menuManager();
void menuIntern();
void menuSupervisor();

int main(int argc, char const *argv[]) {
  bool entraSistema=false;
  int TipoLogged=0;
  Usuario* manager;
  Usuario* intern;
  Usuario* supervisor;

  Usuario* administrador = new db_administrador("2013","admin", "admin@admin", "123");
  vector<db_manager*> listaManager;
  vector<db_intern*> listaIntern;
  vector<db_supervisor*> listaSupervisor;


  string nombre, contrasena;
  do{
    TipoLogged=0;
    cout << "Ingrese Nombre: ";
    cin >> nombre;
    cout << "Ingrese password: ";
    cin >> contrasena;
    if(administrador->getNombre()==nombre && administrador->getPassword()==contrasena){
      entraSistema=true;
      TipoLogged=1;
      cout << "entramos A" << endl;
    }else{
      for (int i = 0; i < listaManager.size(); i++) {
        if(listaManager.at(i)->getNombre()==nombre && listaManager.at(i)->getPassword()==contrasena){
          TipoLogged=2;
          manager = listaManager.at(i);
          cout << "entramos M" << endl;
        }
      }// fin for
      for (int i = 0; i < listaIntern.size(); i++) {
        if(listaIntern.at(i)->getNombre()==nombre && listaIntern.at(i)->getPassword()==contrasena){
          TipoLogged=3;
          intern = listaIntern.at(i);
          cout << "entramos I" << endl;
        }
      } // fin for
      for (int i = 0; i < listaSupervisor.size(); i++) {
        if(listaSupervisor.at(i)->getNombre()==nombre && listaSupervisor.at(i)->getPassword()==contrasena){
          TipoLogged=4;
          supervisor = listaSupervisor.at(i);
          cout << "entramos S" << endl;
        }
      } // fin for
    }
    if(TipoLogged==0){
      cout << endl;
      cout << "Usuario Incorrecto" << endl;
    }
  }while(TipoLogged==0);

  int opcion=0;
  if(TipoLogged ==1){ //admin
    do {
      cout << endl;
      menuAdmin();
      cin >> opcion;
      if(opcion==1){ // Crear manager
        string nombre, correo, password;
        double sueldo;
        cout << "Ingrese Nombre:";
        cin >> nombre;
        cout << "Ingrese Correo:";
        cin >> correo;
        cout << "Ingrese Password:";
        cin >> password;
        cout << "Ingrese Sueldo:";
        cin >> sueldo;

        listaManager.push_back(new db_manager(nombre, correo, password, sueldo));

      }
      if(opcion==2){ //eliminiar manager
        for (int i = 0; i < listaManager.size(); i++) {
          cout << i << ": " << listaManager.at(i)->toString()<< endl;
        }
        int pos=0;
        cout << "Escoja la posicion que desea eliminar:";
        cin >> pos;
        listaManager.erase(listaManager.begin() + pos);

      }
      if(opcion==3){ // crear intern
        string nombre, correo, password;
        int dias;
        cout << "Ingrese Nombre:";
        cin >> nombre;
        cout << "Ingrese Correo:";
        cin >> correo;
        cout << "Ingrese Password:";
        cin >> password;


        listaIntern.push_back(new db_intern(nombre, correo, password, 0));

      }
      if(opcion==4){ //eliminar intern
        for (int i = 0; i < listaIntern.size(); i++) {
          cout << i << ": " << listaIntern.at(i)->toString()<< endl;
        }
        int pos=0;
        cout << "Escoja la posicion que desea eliminar:";
        cin >> pos;
        listaIntern.erase(listaIntern.begin() + pos);

      }
      if(opcion==5){ // crear supervisor
        string nombre, correo, password;
        cout << "Ingrese Nombre:";
        cin >> nombre;
        cout << "Ingrese Correo:";
        cin >> correo;
        cout << "Ingrese Password:";
        cin >> password;


        listaSupervisor.push_back(new db_supervisor(nombre, correo, password, 0));

      }
      if(opcion==6){ //eliminar supervisor
        for (int i = 0; i < listaSupervisor.size(); i++) {
          cout << i << ": " << listaSupervisor.at(i)->toString()<< endl;
        }
        int pos=0;
        cout << "Escoja la posicion que desea eliminar:";
        cin >> pos;
        listaSupervisor.erase(listaSupervisor.begin() + pos);

      }
      if(opcion==7){ ///salir
        cout << "Adios" << endl;
      }



    } while(opcion!=7);


  }
  if(TipoLogged ==2){ //manager
    do{
      cout << endl;
      menuManager();
      cin >> opcion;
      if(opcion==1){ //Crear Intern
        string nombre, correo, password;
        int dias;
        cout << "Ingrese Nombre:";
        cin >> nombre;
        cout << "Ingrese Correo:";
        cin >> correo;
        cout << "Ingrese Password:";
        cin >> password;


        listaIntern.push_back(new db_intern(nombre, correo, password, 0));

      }
      if(opcion==2){ //Eliminar Intern
        for (int i = 0; i < listaIntern.size(); i++) {
          cout << i << ": " << listaIntern.at(i)->toString()<< endl;
        }
        int pos=0;
        cout << "Escoja la posicion que desea eliminar:";
        cin >> pos;
        listaIntern.erase(listaIntern.begin() + pos);

      }
      if(opcion==3){ //Crear Supervisor
        string nombre, correo, password;
        cout << "Ingrese Nombre:";
        cin >> nombre;
        cout << "Ingrese Correo:";
        cin >> correo;
        cout << "Ingrese Password:";
        cin >> password;


        listaSupervisor.push_back(new db_supervisor(nombre, correo, password, 0));

      }
      if(opcion==4){ //Eliminar Supervisor
        for (int i = 0; i < listaSupervisor.size(); i++) {
          cout << i << ": " << listaSupervisor.at(i)->toString()<< endl;
        }
        int pos=0;
        cout << "Escoja la posicion que desea eliminar:";
        cin >> pos;
        listaSupervisor.erase(listaSupervisor.begin() + pos);

      }
      if(opcion==5){ //salir
        cout << "Adios" << endl;

      }
    }while(opcion!=5);

  }
  if(TipoLogged ==3){ //intern
    do{
      cout << endl;
      menuIntern();
      cin >> opcion;
      if(opcion==1){//Ver Lista Intern
        for (int i = 0; i < listaIntern.size(); i++) {
          cout << i << ": " << listaIntern.at(i)->toString()<< endl;
        }

      }
      if(opcion==2){//Eliminar Intern
        for (int i = 0; i < listaIntern.size(); i++) {
          cout << i << ": " << listaIntern.at(i)->toString()<< endl;
        }
        int pos=0;
        cout << "Escoja la posicion que desea eliminar:";
        cin >> pos;
        listaIntern.erase(listaIntern.begin() + pos);

      }
      if(opcion==3){//Salir
        cout << "Adios" << endl;
      }

    }while(opcion!=3);

  }
  if(TipoLogged ==4){ //supervisor
    do{
      cout << endl;
      menuSupervisor();
      cin >> opcion;
      if(opcion==1){
        cout << endl;
        cout << "Administrador"<<endl;
        cout << administrador->toString()<< endl;
        cout << endl;
        cout << "Manager: "<< endl;
        for (int i = 0; i < listaManager.size(); i++) {
          cout << i << ": " << listaManager.at(i)->toString()<< endl;
        }
        cout << endl;
        cout << "Intern: "<< endl;
        for (int i = 0; i < listaIntern.size(); i++) {
          cout << i << ": " << listaIntern.at(i)->toString()<< endl;
        }
        cout << endl;
        cout << "Supervisor: "<< endl;
        for (int i = 0; i < listaSupervisor.size(); i++) {
          cout << i << ": " << listaSupervisor.at(i)->toString()<< endl;
        }


      }
      if(opcion==2){
        cout << "Adios" << endl;
      }
    }while(opcion!=2);

  }
  //=============Archivo Administrador================
  ofstream archivo;
  archivo.open("Administrador.txt");
  archivo << administrador->toString();
  archivo.close();
  //=============Archivo Manager================
  ofstream archivo2;
  archivo2.open("Manager.txt");
  for (int i = 0; i < listaManager.size(); i++) {
    archivo2 << listaManager.at(i)->toString() <<  ";";
  }
  archivo.close();
  //=============Archivo Intern================
  ofstream archivo3;
  archivo3.open("Intern.txt");
  for (int i = 0; i < listaIntern.size(); i++) {
    archivo3 << listaIntern.at(i)->toString() <<  ";";
  }
  archivo3.close();
  //=============Archivo Supervisor================
  ofstream archivo4;
  archivo4.open("Supervisor.txt");
  for (int i = 0; i < listaSupervisor.size(); i++) {
    archivo4 << listaSupervisor.at(i)->toString() <<  ";";
  }
  archivo4.close();




  return 0;
}

void menuAdmin(){
    cout << "Menu Administrador" << endl;
    cout << "1) Crear Manager: " << endl;
    cout << "2) Eliminar Manager: " << endl;
    cout << "3) Crear Intern: " << endl;
    cout << "4) Eliminar Intern: " << endl;
    cout << "5) Crear Supervisor: " << endl;
    cout << "6) Eliminar Supervisor: " << endl;
    cout << "7) Salir: " << endl;

    cout << "Ingrese su respuesta: " << endl;
}
void menuManager(){
    cout << "Menu Manager" << endl;
    cout << "1) Crear Intern: " << endl;
    cout << "2) Eliminar Intern: " << endl;
    cout << "3) Crear Supervisor: " << endl;
    cout << "4) Eliminar Supervisor: " << endl;
    cout << "5) Salir: " << endl;

    cout << "Ingrese su respuesta: " << endl;
}void menuIntern(){
    cout << "Menu Intern" << endl;
    cout << "1) Ver Lista Intern: " << endl;
    cout << "2) Eliminar Intern: " << endl;
    cout << "3) Salir: " << endl;


    cout << "Ingrese su respuesta: " << endl;
}void menuSupervisor(){
    cout << "Menu Supervisor" << endl;
    cout << "1) Ver Lista de Todos Los Usuarios: " << endl;
    cout << "2) Salir: " << endl;


    cout << "Ingrese su respuesta: " << endl;
}
