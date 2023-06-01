//EJERICIO 1
#include <stdio.h>

int main(void)
{
int a, b, R;
float Div;
    printf("Introduce el n%cmero a: ", 163);
    scanf("%i", &a);

    printf("Introduce el n%cmero b: ", 163);
    scanf("%i", &b);

    Div = a / b;
    R = a%b;
    printf("La suma de a+b= %i\n", a+b);
    printf("La resta de a-b=%i\n", a-b);
    printf("La multiplicaci%cn de a*b=%i\n", 162, a*b);
    printf("El cociente de a/b=%f\n", Div);
    printf("El resto de a/b=%i\n", R);

    return 0;
}
//EJERCICIO 2
#include <stdio.h>

int main(){
    int a;
    printf("Introduce un n%cmero:", 163);
    scanf(" %i", &a );
    if ( a<10 ){
            printf ( "El n%cmero introducido era menor que 10.\n", 163);
    }
    if ( a>10 ){
            printf( "El n%cmero es mayor que 10\n", 163);
    }
    if ( a==10 ){
            printf( "El n%cmero es igual a 10\n", 163);
    }

    printf("Fin del programa\n" );

return 0;
}
//EJERCICIO 3
#include <stdio.h>
int main()
{
    int a;
    int b;
    printf( "Introduce un n%cmero ", 163);
    scanf( "%i", &a );
    printf( "Introduce otro n%cmero nuevamente ", 163);
    scanf( "%i", &b );
    if ( a<b ){
            printf ( "El n%cmero %i es menor que %i\n", 163, a, b );
    }

    if ( a>b ){
            printf( "El n%cmero %i es mayor que %i\n", 163, a, b );
    }

    if ( a==b ){
        printf( "Los n%cmeros ingresados son iguales\n", 163);
        }

    printf( "Fin del programa\n" );

return 0;
}
//EJERCICIO 4
#include <stdio.h>
int main()
{
    int a;
    printf("Ingrese un n%cmero: ", 163);
    scanf( "%i", &a);
    if(a%2==0){
        printf("\nEl n%cmero ingresado es par\n", 163);
    }
    else {
        printf("\nEl n%cmero ingresado es impar\n", 163);
    }
return 0;
}
//EJERCICIO 5
#include <stdio.h>
#include <string.h>
int main()
{
    int cantarticulos;
    char dia[11];

    printf("Ingrese el d%ca y la cantidad de art%cculos: \n", 161, 161);
    scanf(" %s", &dia);
    scanf(" %i", &cantarticulos);
    if ((strcmp(dia, "lunes") == 0) || (strcmp(dia, "Lunes") == 0)){
        if (cantarticulos>3){
            printf("Accede al descuento\n");
        }
    }
return 0;
}
//EJERCICIO 6
#include <stdio.h>
#include <string.h> 

void usuario(char nombre[]){
    char nombrenuevo[], nypminuscula[], delimitador[] = ",";
    char ABC[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char apellido = strtok(nombre, delimitador);
    for (int i=0; i<=strlen(nombre), i++){
        if(strstr(nombre[i],ABC)!=NULL){
            nombrenuevo+=nombre[i];
        }
    }
    nypminuscula+=apellido;
    for (int i = 0; nypminuscula[i] != '\0'; i++){
        nypminuscula[i] = tolower(nypminuscula[i]);
    }
    printf ("s%", nypminuscula);
    return;
}
void contraseña_por_defecto(int dni){
     char dnistr[], dninuevo[];
     dninuevo=dni%1000;
     sprintf(dnistr, "%d", dninuevo);
     printf("s%", dnistr);
}
main(){
    
}
//EJERCICIO 7
#include <stdio.h>
#include <string.h>

int main(){

    int a, i;

    printf("Ingrese un n%cmero: \n", 163);
    scanf(" %i", &a);
    int doble;
    doble=a*2;
    if(a%2==0){
        for( i=a; i<=doble; i++){
            if (i%2 ==0){
                printf("%i ", i);
            }
        }
}
    else{
        for(i=a; i<=doble; i++){
            printf("%i ", i);
        }
    }
return 0;
}
//EJERCICIO 8
#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[];
    char ABC[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Ingrese una frase");
    scanf("%str", &frase);
    if(strstr(frase[0],ABC)!=NULL){
        if(strstr(frase[1],ABC)!=NULL){
            for (int i = 0; frase[i] != "\0"; i++){
                frase[i] = toupper(frase[i]);
            }
        }
    }
    printf("%c\n", frase);
return 0;
}
//EJERCICIO 9
#include <stdio.h>
#include <ctype.h>
 
int main(){
    char serie[];

    printf("Ingrese el nombre de su serie preferida\n");
    scanf("%s",&serie);

    for (int i = 0; serie[i] != '\0'; i++){
        serie[i] = tolower(serie[i]);
    }
    serie[0]=toupper(serie[0]);
    printf("Tu serie preferida es: \n"serie);

    return 0;
}
//EJERCICIO 10
//x vale 2
// y *x vale el doble de la posicion de memoria inicial


