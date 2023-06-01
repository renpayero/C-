#include <iostream>

using namespace std;

/* A pesar de que el programa a continuación no tiene errores de sintaxis, sí tiene varios otros problemas.
¿Cuáles son? ¿Cómo podrían corregirse?

const int MAX=100;
int cargar(float arreglo[], int dl){
for (int i=0; i<MAX; i++){
cout << "Número para almacenar: ";
cin >> arreglo[i];
}
return dl;
}
int main(){
float numeros[MAX];
int cantidad = 0;
cargar(numeros, cantidad);
}
*/

int main()
{
    cout << "El parametro cl es innecesario." << endl; //RESPUESTA EN COUT
    return 0;
}
