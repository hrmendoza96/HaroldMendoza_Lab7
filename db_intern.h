#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_intern : public Usuario{
  private:
    int numeroDias;
  public:
    virtual int verificarPassSize();


};
