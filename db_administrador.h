#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_administrador : public Usuario{
  private:
    string fechaEntrada;
  public:
    db_administrador();
    db_administrador(string, string, string, string);
    void setFechaEntrada(string);
    string getFechaEntrada();
    string toString();
    virtual int verificarPassSize();
    ~db_administrador();



};
