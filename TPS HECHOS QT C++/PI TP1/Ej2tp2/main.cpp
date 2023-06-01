#include <iostream>

using namespace std;

int main()
{
    int i, arreglo[10];
    for (i = 0; i < 10; i++)
    arreglo[i] = 2*i; //guarda en "arreglo" el numero por el cual va iterando multiplicado por 2 hasta completar
                       // todos los espacios del arreglo
    for (i = 0; i < 10; i++)
    cout << arreglo[i] << " "; /* imprime el elemento del indice i con un espacio a la derecha */
    cout << endl;
    for (i = 0; i <= 10; i = i + 2)
    cout << arreglo[i] << " "; //imprime desde el indice 0 los elementos de arreglo, salteando 1 e imprimiendo el siguiente.
                                // (de 2 en 2)
}
