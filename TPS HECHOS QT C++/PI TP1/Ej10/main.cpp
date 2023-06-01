#include <iostream>

using namespace std;

int suma_dig(int n) {
   int suma=0;
   if (n < 0) n=-n;
   while (n!=0) {
     suma+=n%10;            /* Sumamos la última cifra, que se obtiene
                             calculando el resto módulo 10 del número.
                             Por ejemplo, la última cifra de 12345 es
                             12345 % 10 = 5. */
      n=n/10;               /* Lo mismo, pero sin la ultima cifra,
                             se obtiene calculando el cociente de
                             dividir el número original por 10.
                             Por ejemplo, 12345/10 =1234. */
   }
   return suma;

}

int main()
{
    char letra;
    int num,numb,a,b;
    do{
        cout<<"Elija una opcion \nA: Invertir numero.\nB: Sumatoria de digitos.\nC: Decir si son multiplos.\nD: Salir.\n";cin>>letra;

        switch (letra){

        case 'a': {
                cout<<"Ingrese un numero para invertirlo: \n"; cin>> num;
                int inv=0;
                while (num>0){
                    inv=inv*10+(num%10);
                    num=num/10;}
                cout<< inv << " Es el numero invertido\n";
                break;}

        case 'b':{
             cout<<"Ingrese un numero para sumar sus digitos: \n"; cin>>numb;
             cout<< suma_dig(numb)<< " Es la suma de los digitos\n";
             break;}

        case 'c':{
            cout<<"Ingrese un numero"; cin>>a;
            cout<<"Ingrese un numero"; cin>>b;

            if ((a%b) == 0){
                cout<<"Son multiplos\n";}
            if ((a%b) != 0){
                cout<<"No son multiplos\n";
              }
            }
          }
        }while(letra != 'D' && letra != 'd');
        cout<<"El programa a finalizado.\n";
        return 0;
}

