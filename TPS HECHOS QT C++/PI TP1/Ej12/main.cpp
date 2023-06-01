#include <iostream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string cadena;
    int contador=0;
    cout<<"Ingrese una cadena\n"; getline(cin>>ws,cadena);

    for(int longitud=cadena.length(); longitud > -1; longitud--){
         if (cadena[longitud] != ' '){
             contador+=1;
         }
         if (cadena[longitud] == ' '){
             longitud=-1;
         }
    }
    cout<<"La cantidad de caracteres de la ultima palabra ingresada es:\n"<< --contador<<endl;
    return 0;
}
