#include <iostream>
#include <string>
#include <vector>
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
  Usuario* administrador = new db_administrador("admin", "admin@admin", "123", "2016");
  vector<db_manager*> listaManager;
  vector<db_intern*> listaIntern;
  vector<db_supervisor*> listaSupervisor;
  int TipoLogged=0;
  Usuario* manager;
  Usuario* intern;
  Usuario* supervisor;

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
      cout << "entramos" << endl;
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
  if(){

  }



  return 0;
}

void menuAdmin(){
    cout << "Menu Administrador" << endl;
    cout << "1) : " << endl;
    cout << "2) : " << endl;
    cout << "3) : " << endl;
    cout << "4) : " << endl;

    cout << "Ingrese su respuesta: " << endl;
}
void menuManager(){
    cout << "Menu Manager" << endl;
    cout << "1) : " << endl;
    cout << "2) : " << endl;
    cout << "3) : " << endl;
    cout << "4) : " << endl;

    cout << "Ingrese su respuesta: " << endl;
}void menuIntern(){
    cout << "Menu Intern" << endl;
    cout << "1) : " << endl;
    cout << "2) : " << endl;
    cout << "3) : " << endl;
    cout << "4) : " << endl;

    cout << "Ingrese su respuesta: " << endl;
}void menuSupervisor(){
    cout << "Menu Supervisor" << endl;
    cout << "1) : " << endl;
    cout << "2) : " << endl;
    cout << "3) : " << endl;
    cout << "4) : " << endl;

    cout << "Ingrese su respuesta: " << endl;
}
