#include <iostream>

using namespace std;

int mas_uno(int arreglo[],int dimension_logica){
    for (int i=0; i<dimension_logica; i++ ){
        arreglo[i]=arreglo[i]+1;
    }
    for (int z=0; z!=dimension_logica; z++){
        cout<< arreglo[z]<<endl;
    }
    return 0;
}

int main()
{   int arreglo[5]={1,2,3,4,5};
    int dimension_logica=5;
    mas_uno(arreglo, dimension_logica);
    return 0;
}
