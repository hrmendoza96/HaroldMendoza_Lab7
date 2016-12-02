#include "Usuario.h"
#include "db_supervisor.h"
#include <iostream>
#include <string>
#include <sstream>

db_supervisor::db_supervisor(){
  contadorIngresa=0;
}
db_supervisor::db_supervisor(string nombre, string correo, string password, int contadorIngresa):Usuario(nombre, correo, password){
  this->contadorIngresa=contadorIngresa;
}
void db_supervisor::setContadorIngresa(int contadorIngresa){
  this->contadorIngresa=contadorIngresa;
}
int db_supervisor::getContadorIngresa(){
  return contadorIngresa;
}
string db_supervisor::toString(){
  stringstream ss;
  ss << Usuario::toString() << contadorIngresa << " ";
  return ss.str();
}
bool db_supervisor::verificarPassSize(){
  if(password.size()==8){
    return true;
  }else{
    return false;
  }

}
db_supervisor::~db_supervisor(){

}
