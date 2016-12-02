#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario{
  protected:
    string nombre;
    string correo;
    string password;


  public:
    Usuario();
    Usuario(string, string, string);
    void setNombre(string);
    void setCorreo(string);
    void setPassword(string);
    string getNombre();
    string getCorreo();
    string getPassword();
    string toString();
    virtual int verificarPassSize();
    virtual ~Usuario();



};
