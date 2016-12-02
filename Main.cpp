#include <iostream>
#include <string>
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
  Usuario* administrador = new db_administrador("admin", "admin@admin", "123", "2016");
  string nombre, contrasena;
  cout << "Ingrese Nombre: ";
  cin >> nombre;
  cout << "Ingrese password: ";
  cin >> contrasena;
  if(administrador->getNombre()==nombre && administrador->getPassword()==contrasena){
    cout << "entramos" << endl;

  //}else if(){

  //}else if(){

  //}else if(){

  //}else if(){

  }else{
    cout << "Ingrese un usuario incorrecto";
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
