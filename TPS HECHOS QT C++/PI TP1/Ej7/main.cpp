#include <iostream>

using namespace std;

int main()
{
    int cant;
    int cant2;
    int num;
    int suma=0;
    int promedio=0;
    int grande=0;
    long long int pequeno=999999999999999999999999999999999999999999999999999999999999999;

    cout<<"ingrese la cantidad de numeros a ingresar";cin>>cant;
    cant2=cant;
    while (cant!=0){
        cant--;
        cout<<"ingrese un numero";cin>>num;
        if (pequeno > num){pequeno=num;}
        if (grande< num){grande=num;}
        suma=suma+num;
     }
    promedio=suma/cant2;
    cout<< "promedio ";cout<<promedio;cout<<"grande";cout<<grande;cout<<"pequeno";cout<<pequeno;
    return 0;



}
