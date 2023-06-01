#include <iostream>

using namespace std;

int main()
{
    char caracter;
    do{
        cout<<"ingrese un caracter: ";cin>> caracter;
        caracter=tolower(caracter);

    }while (caracter != 's' && caracter != 'n');


    if (caracter == 's'){
        cout<<"Usted eligio SI\n";
        }
    if (caracter == 'n' ){
        cout<<"Usted eligio NO\n";
    }
    return 0;
}
