#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_manager : public Usuario{
  private:
    double sueldo;
  public:
    virtual int verificarPassSize();

};
