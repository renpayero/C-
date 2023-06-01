#include <iostream>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    string cadena, cadena_invertida="";

    cout<<"intruduce una cadena\n"; getline(cin>>ws,cadena);

    for(int longitud=cadena.length(); longitud > -1; longitud--){
        cadena_invertida=cadena_invertida+cadena[longitud];

    }
    cout<<"La cadena invertida es"<<cadena_invertida<<endl;
    return 0;
}
