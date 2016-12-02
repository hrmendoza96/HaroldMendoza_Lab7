#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_intern : public Usuario{
  private:
    int numeroDias;
  public:
    db_intern();
    db_intern(string, string, string, int);
    void setNumeroDias(int);
    int getNumeroDias();
    string toString();
    virtual bool verificarPassSize();
    ~db_intern();


};
