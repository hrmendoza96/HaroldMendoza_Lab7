#include "db_manager.h"
#include "Usuario.h"
#include <iostream>
#include <string>
#include <sstream>

db_manager::db_manager(){
  sueldo=0;
}
db_manager::db_manager(string nombre, string correo, string password, double sueldo):Usuario(nombre, correo, password){
  this->sueldo=sueldo;
}
void db_manager::setSueldo(double sueldo){
  this->sueldo=sueldo;
}
double db_manager::getSueldo(){
  return sueldo;
}
string db_manager::toString(){
  stringstream ss;
  ss << Usuario::toString() << " Sueldo: " << sueldo << "\n";
  return ss.str();
}
bool db_manager::verificarPassSize(){
  if(password.size()==16){
    return true;
  }else{
    return false;
  }

}
db_manager::~db_manager(){

}
