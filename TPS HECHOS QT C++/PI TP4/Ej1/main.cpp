#include <iostream>
using namespace std;

int funcion(int m, int n) {
if (n == 0) {
return 0;
}
return m + funcion(m, n-1);
}

int main() {
cout << funcion(20, 3)<<endl; //retorna 60
return 0;
}
