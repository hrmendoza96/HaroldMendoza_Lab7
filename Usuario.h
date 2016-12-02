#pragma once
#include <iostream>
#include <string>
class Usuario{
  protected:
    string nombre;
    string correo;
    string password;


  public:
    Usuario();
    void setNombre();
    void setCorreo();
    void setPassword();
    string getNombre();
    string getCorreo();
    string getPassword();
    virtual int verificarPassSize();
    virtual ~Usuario();



};
