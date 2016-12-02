#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class db_supervisor : public Usuario{
  private:
    int contadorIngresa;
  public:
    db_supervisor();
    db_supervisor(string, string, string, int);
    void setContadorIngresa(int);
    int getContadorIngresa();
    string toString();
    virtual bool verificarPassSize();
    ~db_supervisor();


};
