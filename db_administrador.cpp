#include "db_administrador.h"
#include "Usuario.h"
#include <iostream>
#include <string>
#include <sstream>


db_administrador::db_administrador(){
  fechaEntrada="";
}
db_administrador::db_administrador(string nombre, string correo, string password, string fechaEntrada):Usuario(nombre, correo, password){
  this->fechaEntrada=fechaEntrada;
}
void db_administrador::setFechaEntrada(string fechaEntrada){
  this->fechaEntrada=fechaEntrada;
}
string db_administrador::getFechaEntrada(){
  return fechaEntrada;
}
string db_administrador::toString(){
  stringstream ss;
  ss << Usuario::toString() << fechaEntrada << " ";
  return ss.str();
}
bool db_administrador::verificarPassSize(){
  if(password.size()==16){
    return true;
  }else{
    return false;
  }

}
db_administrador::~db_administrador(){

}
