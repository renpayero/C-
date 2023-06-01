#include <iostream>
#include <string>

using namespace std;

struct pareja{
    int num_inscripcion;
    string integrante1;
    string integrante2;
    string cancion;
};

struct canciones{
    string nombrecancion;
    int duracion_cancion;
};

string acomodar_oracion(string var){
    string var1,varminuscula;
        var1=toupper(var[0]);
        for (int x=1; x < var.length(); x++){
            varminuscula=tolower(var[x]);
            var1+=varminuscula;
        }
        var1=var;
        return var;
}

int cargar_datos(pareja arreglo[], int dl){
    pareja pareja;
    int corte=1;
    while (40 > dl && corte == 1){
        cout<<"Ingrese el numero de inscripcion: "<< endl; cin>> pareja.num_inscripcion;
        cout<<"Ingrese el nombre del integrante 1: "<< endl; getline(cin>>ws,pareja.integrante1);
        cout<<"Ingrese el nombre del integrante 2: "<< endl; getline(cin>>ws,pareja.integrante2);
        cout<<"Ingrese el nombre de la cancion a usar en su presentacion: "<< endl; getline(cin>>ws,pareja.cancion);
        arreglo[dl]=pareja;
        dl++;
        pareja.cancion=acomodar_oracion(pareja.cancion);
        cout<<"Si desea ingresar una nueva pareja ingrese 1 de lo contrario, ingrese 0: " << endl; cin>>corte;
    }
    return dl;
}

int cargar_datos_musica(canciones arreglo2[], int dl2){
    canciones canciones;
    int corte2=1;
    while (40 > dl2 && corte2 == 1){
        cout<<"Ingrese el nombre de la cancion: "<< endl; getline(cin>>ws,canciones.nombrecancion);
        canciones.nombrecancion=acomodar_oracion(canciones.nombrecancion);
        cout<<"Ingrese la duraciones de la cancion en segundos: "<< endl; cin>>canciones.duracion_cancion;
        arreglo2[dl2]=canciones;
        dl2++;
        cout<<"Si desea ingresar una nueva cancion ingrese 1 de lo contrario, ingrese 0: " << endl; cin>>corte2;
    }
    return dl2;
}
string cancion_mas_larga(canciones arreglo2[], int dl2){
    string cancion_mas_larga;
    int duracion=0;
    for (int i=0; i<dl2; i++){
        if(arreglo2[i].duracion_cancion>duracion){
            duracion=arreglo2[i].duracion_cancion;
            cancion_mas_larga=arreglo2[i].nombrecancion;
        }
    }
    return cancion_mas_larga;
}

int cantidad_parejas_cancion(pareja arreglo[], int dl, string cancion_mas_larga){
    int parejas;
    for(int i=0;i<dl;i++){
        if(arreglo[i].cancion==cancion_mas_larga){
            parejas++;
        }
    }
    return parejas;
}

void eliminar_cancion(canciones arreglo2[],pareja arreglo[], int dl2){
    string cancion_a_eliminar;
    cout<<"--------------------------------"<<endl<<"LISTADO DE CANCIONES"<<endl<<"--------------------------------"<<endl;
    for (int i = 0; i < dl2; i++) {
        cout <<"El nombre de la cancione es: "<< arreglo2[i].nombrecancion << endl;
        cout <<"Y su duracion en segundos es de: "<< arreglo2[i].duracion_cancion << endl;
 }
    cout<<"¿Que cancion quiere eliminar?"<< endl; getline(cin>>ws,cancion_a_eliminar);
    cancion_a_eliminar=acomodar_oracion(cancion_a_eliminar);
    for(int i=0; i<dl2; i++){
        if(cancion_a_eliminar==arreglo[i].cancion){
            cout<<"Esta cancion es usada por una pareja, no se puede eliminar."<<endl;
        }
        else{
            int i = 0;
            while (i < dl2 && arreglo2[i].nombrecancion != cancion_a_eliminar){
               i++;
            }
            if (arreglo2[i].nombrecancion == cancion_a_eliminar){
                for (int j = i; j < dl2-1; j++)
                {
                    arreglo[j] = arreglo[j+1];
                }
                dl2--;
            }
        }    
    }
}

int main()
{
    pareja arreglo[40];
    canciones arreglo2[40];
    string cancionmaslarga;
    int cantidad_de_parejas_con_la_cancion_mas_larga;
    int dl=0;
    int dl2=0;
    dl=cargar_datos(arreglo, dl);
    dl2=cargar_datos_musica(arreglo2, dl2);
    cancionmaslarga=cancion_mas_larga(arreglo2,dl2);
    cantidad_de_parejas_con_la_cancion_mas_larga=cantidad_parejas_cancion(arreglo,dl,cancionmaslarga);
    cout<<"La cantidad de parejas con la cancion mas larga es: "<< cantidad_de_parejas_con_la_cancion_mas_larga<< endl;
    eliminar_cancion(arreglo2,arreglo,dl2);
    cout<<"El programa a finalizado."<<endl;
}

// LINK DEL VIDEO https://www.youtube.com/watch?v=PlUSg9oroqc&ab_channel=Dako