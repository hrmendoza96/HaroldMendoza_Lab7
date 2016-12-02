#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_administrador : public Usuario{
  private:
    string fechaEntrada;
  public:
    virtual int verificarPassSize();


};
