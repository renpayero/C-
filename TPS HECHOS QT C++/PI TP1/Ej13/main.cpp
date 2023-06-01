#include <iostream>
#include <string>
#include <locale>
#include <algorithm>


using namespace std;

int main()
{
    string var,var1,varminuscula;

        cout<<"Ingrese una cadena"; getline(cin>>ws,var);
        var1=toupper(var[0]);
        for (int x=1; x < var.length(); x++){
            varminuscula=tolower(var[x]);
            var1+=varminuscula;
        }
        cout<<var1<<endl;
    return 0;
}

