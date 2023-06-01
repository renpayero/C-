#include <iostream>

using namespace std;

int main()
{
    long int segs1;
    short int horas, mins, segundos;

    cout<< "ingrese una cantidad de segundos:\n";cout<<endl;cin>> segs1;

    horas=(segs1/60/60);
    mins=(segs1/60)%60;
    segundos= (segs1%60);

    cout<< "la cantidad de segundos ingresada es equivalente a:"; cout<< endl; cout<< horas;
    cout<<" Horas ";cout<<mins;cout<<" Minutos ";cout<<segundos;cout<<" Segundos ";cout<<endl;



    return 0;
}
