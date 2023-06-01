#include <iostream>

using namespace std;

int main()
{
    char letra1;
    char letra2;
    char letra3;
    cout<< "ingrese una letra:\n"; cin>>letra1;
    cout<< "ingrese una letra:\n"; cin>>letra2;
    cout<< "ingrese una letra:\n"; cin>>letra3;

    if (letra1 < letra2 and letra1 < letra3){
        cout<< letra1; cout<< " es la primera letra en en aparecer en el alfabeto";cout<< endl;}
    else{
        if(letra2 < letra1 and letra2 < letra3){
            cout<< letra2; cout<< " es la primera letra en en aparecer en el alfabeto";cout<< endl;}
        else{cout<< letra3; cout<< " es la primera letra en en aparecer en el alfabeto";cout<< endl;}

        }
    return 0;
    }



