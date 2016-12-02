#include "Usuario.h"
#include "db_intern.h"
#include <iostream>
#include <string>
#include <sstream>

db_intern::db_intern(){
  numeroDias=0;
}
db_intern::db_intern(string nombre, string correo, string password, int numeroDias):Usuario(nombre, correo, password){
  this->numeroDias=numeroDias;
}
void db_intern::setNumeroDias(int numeroDias){
  this->numeroDias=numeroDias;
}
int db_intern::getNumeroDias(){
  return numeroDias;
}
string db_intern::toString(){
  stringstream ss;
  ss << Usuario::toString() << " numeroDias: " << numeroDias << "\n";
  return ss.str();
}
bool db_intern::verificarPassSize(){
  if(password.size()==8){
    return true;
  }else{
    return false;
  }

}
db_intern::~db_intern(){

}
