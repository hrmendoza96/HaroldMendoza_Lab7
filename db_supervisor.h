#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_supervisor : public Usuario{
  private:
    int contadorIngresa;
  public:
    virtual int verificarPassSize();


};
