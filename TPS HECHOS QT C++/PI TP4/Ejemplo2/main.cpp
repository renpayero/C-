#include <iostream>

using namespace std;

int invertir_numero(int n, int resultado = 0) {
 if (n < 10) {
 return resultado * 10 + n;
 }
 resultado = (resultado * 10) + (n % 10);
 return invertir_numero(n / 10, resultado);
}


int main()
{
    cout << invertir_numero(1234)<< endl;

}
