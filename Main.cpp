#include <iostream>
#include <string>

using namespace std;

void menu();
void login();

int main(int argc, char const *argv[]) {
  int opcion=0;
  do {
    menu();
    cin >> opcion;
    if(opcion==1){

    }
    if(opcion==2){

    }
    if(opcion==3){

    }

    if(opcion==4){
      cout << "Hasta Luego" << endl;

    }

  } while(opcion!=4);

  return 0;
}

void menu(){
    cout << "Programa Administrador de Usuarios" << endl;
    cout << "1) : " << endl;
    cout << "2) : " << endl;
    cout << "3) : " << endl;
    cout << "4) : " << endl;

    cout << "Ingrese su respuesta: " << endl;
}


void login(){
  cout << "==================Ingrese sus datos para entrar al sistema ============================= "<< endl;
  cout << "Nombre: ";


}
