#include <iostream>

using namespace std;

int main()
{

        char letra;

        do{
            cout << "Elija una opcion \nA: Nliombre Y Apeldo.\nB: Email Constitucional.\nC: Fecha de nacimiento.\nD: Salir.\n";cin>>letra;
            letra=tolower(letra);

            switch (letra){

            case 'a':{
                string var,var1,varminuscula;

                cout<<"Ingrese el nombre y apellido del alumno.\n"; getline(cin>>ws,var);
                var1=toupper(var[0]);
                for (int x=1; x < var.length(); x++){
                    varminuscula=tolower(var[x]);
                    var1+=varminuscula;
                }
                cout<<var1<<endl;
            }

            case 'b':{
                string nym, letranombre, apellido;
                int dni;
                cout<<"Ingresar Nombre y Apellido del alumno.\n"; getline(cin>>ws, nym);
                letranombre=nym[0];
                for(int x=0; x < nym.length(); x++){
                    if (nym[x] == ' '){
                        x+=1;
                        for(int i=x; i < nym.length(); i++){
                            apellido+=tolower(nym[i]);}


                        }
                    }
                cout<<"Ingresar DNI del alumno.\n";cin>>dni;
                dni=dni%1000;
                letranombre=tolower(letranombre[0]);
                cout<<"Su mail institucional es:\n"<<letranombre<<apellido<<dni<<"@comunidad.unnoba.edu.ar"<<endl;
                }


            case 'c':{
                int fecha;
                int dia, mes, anio;
                string mes_si,dia_si;
                do{cout<<"Ingrese fecha de nacimiento del alumno en el formato AAAAMMDD:\n";cin>>fecha;
                    dia=fecha%100;
                    if (dia > 1){ dia_si="si";}
                    anio=fecha/10000;
                    mes=fecha%10000;
                    mes=mes/100;

                    if ( mes >= 1 && mes <= 12 )
                        {
                            switch (mes) {
                                case  1 :if ( dia >= 1 && dia <= 31 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case  2 :if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 ) //DEFINE SI EL ANIO ES BISIESTO O NO
                                    if ( dia >= 1 && dia <= 29 )
                                         mes_si="si";
                                     else
                                         mes_si="no";
                                 else
                                    if ( dia >= 1 && dia <= 28 )
                                         mes_si="si";
                                     else
                                         mes_si="no";
                                  break;
                                case  3 :if ( dia >= 1 && dia <= 31 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case  5 :if ( dia >= 1 && dia <= 31 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case  7 :if ( dia >= 1 && dia <= 31 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case  8 :if ( dia >= 1 && dia <= 31 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case 10 :
                                case 12 :if ( dia >= 1 && dia <= 31 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;

                                case  4 :if ( dia >= 1 && dia <= 30 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case  6 :if ( dia >= 1 && dia <= 30 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case  9 :if ( dia >= 1 && dia <= 30 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;
                                case 11 :if ( dia >= 1 && dia <= 30 )
                                    mes_si="si";
                                else
                                    mes_si="no";
                                break;

                            }
                        }
                    if (mes_si == "si" && dia_si == "si"){
                        cout<<"La fecha ingresada es:\n"<< dia<<"/"<<mes<<"/"<<anio<<endl;
                    }
                    else{
                        cout<<"O el dia o el mes ingresados son invalidos, porfavor ingrese los datos nuevamente"<<endl;
                    }
                }while(mes_si == "si" && dia_si == "si");
            }
            }
        }while(letra != 'D' && letra != 'd');
    }

