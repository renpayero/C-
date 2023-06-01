#include <iostream>

using namespace std;

int ascendente(int arreglo[], int dimension_logica)
{
    for (int i=0; i < dimension_logica; i++){
        for (int x=0; x!=dimension_logica; x++){
            if (arreglo[i]<arreglo[x]){
                int carry=arreglo[i];
                arreglo[i]=arreglo[x];
                arreglo[x]=carry;
            }
        }
    }
    for (int z=0; z!=20; z++){
        cout<< arreglo[z]<<endl;
    }
return 0;
}

int descendente(int arreglo[], int dimension_logica)
{
    for (int i=0; i < dimension_logica; i++){
        for (int x=0; x!=dimension_logica; x++){
            if (arreglo[i]>arreglo[x]){
                int carry=arreglo[i];
                arreglo[i]=arreglo[x];
                arreglo[x]=carry;
            }
        }
    }
    for (int z=0; z!=20; z++){
        cout<< arreglo[z]<<endl;
    }
return 0;
}

int main()
{
    int arreglo[20];
    int dimension_logica=0;
    char opcion;
    while (dimension_logica != 20){
        cout<<"Ingrese un valor"; cin>>arreglo[dimension_logica];
        dimension_logica++;
    }
    cout<<"Ingrese \na) El usuario ingresa los numeros en orden ascendente\nb) El usuario ingresa los numeros en orden descendente \nc) El usuario ingresa los numeros sin un orden en particular \nx) finalizar el programa";
    cin>> opcion;
    switch (opcion){
    case 'a': { ascendente(arreglo, dimension_logica); break;}
    case 'b':{ descendente(arreglo, dimension_logica); break;}
    case 'c':{for (int z=0; z!=20; z++){cout<< arreglo[z]<<endl;}break;}
    case 'x':{break;}}
    return 0;
}
