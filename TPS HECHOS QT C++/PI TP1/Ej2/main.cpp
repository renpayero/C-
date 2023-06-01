#include <iostream>

using namespace std;

int main()
{   int cant, numero;
    int negativos=0;
    cout<< "ingrese la cantidad de numeros a ingresar:\n "; cin>> cant;
    while (cant != 0){
        cout<< "Ingrese un numero:\n "; cin>>numero;
        if (numero<0){negativos=negativos+1;}
        cant= cant - 1;



}
    cout<<"la cantidad de numeros negativos ingresados son:\n "; cout<< negativos; cout<< endl;
    return 0;
}
