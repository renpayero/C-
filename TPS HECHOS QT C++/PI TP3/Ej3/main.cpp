#include <iostream>

using namespace std;

int main()
{
    char* x = new char;
    char* z = x;
    //a y b
    *x='m';
    cout<<*x<<endl;
    //c y d, imprimira 2 veces la p porque comparten el mismo espacio de memoria en la heap
    *z='p';
    cout<<*z<<" "<<*x<<endl;
    //e
    delete x; //si luego se intentea imprimir z, se imprimira memoria basura ya que z era igual a x porque compartian memoria.
    char* x=new char;



}
