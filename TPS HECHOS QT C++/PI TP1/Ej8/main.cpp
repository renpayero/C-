#include <iostream>
#include <string>

using namespace std;

int main()
{
    int media_vocale_minisculas=0,vocales[5]={0,0,0,0,0},cantidad_caracteres=0,cantidad_vocales=0;
    char caracter;
    do{
        cout<<"ingrese una letra: ";cin>>caracter;

        if(caracter=='a'){
                cantidad_vocales+=1;
                vocales[0]+=1;
                media_vocale_minisculas+=1;
        }
        if(caracter=='e'){
                cantidad_vocales+=1;
                vocales[1]+=1;
                media_vocale_minisculas+=1;
        }
        if(caracter=='i'){
                cantidad_vocales+=1;
                vocales[2]+=1;
                media_vocale_minisculas+=1;
        }
        if(caracter=='o'){
                cantidad_vocales+=1;
                vocales[3]+=1;
                media_vocale_minisculas+=1;
        }
        if(caracter=='u'){
                cantidad_vocales+=1;
                vocales[4]+=1;
                media_vocale_minisculas+=1;
        }
        cantidad_caracteres+=1;

    }
    while(caracter!='n');

    cout<<"media de vocales minusculas: "<<cantidad_caracteres/cantidad_vocales<<" cantidad de caracteres: "<<cantidad_caracteres<<endl;
    cout<<"cantidad de letras vocales  "<<"a: "<<vocales[0]<<" e:"<<vocales[1]<<" i:"<<vocales[2]<<" o: "<<vocales[3]<<" u: "<<vocales[4]<<endl;
    return 0;

}
