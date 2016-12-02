#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_manager : public Usuario{
  private:
    double sueldo;
  public:
    db_manager();
    db_manager(string, string, string, double);
    void setSueldo(double);
    double getSueldo();
    string toString();
    virtual bool verificarPassSize();
    ~db_manager();

};
