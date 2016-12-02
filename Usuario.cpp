#include "Usuario.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Usuario::Usuario(){
  nombre="";
  correo="";
  password="";

}

Usuario::Usuario(string nombre, string correo, string password){
  this->nombre=nombre;
  this->correo=correo;
  this->password=password;
}
void Usuario::setNombre(string nombre){
  this->nombre=nombre;
}
void Usuario::setCorreo(string correo){
  this->correo=correo;
}
void Usuario::setPassword(string password){
  this->password=password;
}
string Usuario::getNombre(){
  return nombre;
}
string Usuario::getCorreo(){
  return correo;
}
string Usuario::getPassword(){
  return password;
}
int Usuario::verificarPassSize(){
  return 0;
}

string Usuario::toString() {
    stringstream ss;
    ss << "Nombre: " << nombre << "\n";
    ss << "Correo: " << correo << "\n";
    ss << "Password: " << password << "\n";
    return ss.str();
}


Usuario::~Usuario(){

}
