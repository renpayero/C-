#include <iostream>

using namespace std;

int main()
{
    //Dados los siguientes structs:
    struct Producto {
    string descripcion;
    float precio;
    };
    struct Venta {
    Producto producto;
    int cantidad;
    };
   /* Escribir y luego ejecutar las instrucciones necesarias para:
    a) Declarar una variable puntero a Venta y reservar memoria.
    b) Pedir al usuario que ingrese una cantidad vendida, descripción de producto y precio de producto,
    almacenando los datos en la Venta apuntada por el puntero declarado en el inciso anterior.
    c) Restar un 15% al precio del Producto guardado en la Venta apuntada por el puntero.
    d) Imprimir la descripción del producto dentro de la Venta y monto total (precio del producto * cantidad).*/

    Venta* x = new Venta;
    Producto* y = new Producto;
    int po;
    cout<<"ingrese una cantidad vendida:"<<endl;
    cin>>(*x).cantidad;
    cout<<"ingrese una descripcion del producto:"<<endl;
    cin>>(*y).descripcion;
    cout<<"ingrese el precio del producto:"<<endl;
    cin>>(*y).precio;
    //---------------------
    //cout<<(*x).cantidad<<endl;
    //cout<<(*y).descripcion<<endl;
    //cout<<(*y).precio<<endl;
    //----------------------
    po=(*y).precio*(15)/100;
    (*y).precio-=po;
    //----------------------
    cout<<"una vez aplicado el descuento del %15 el precio es de: "<<(*y).precio<<endl;
    //---------------------
    cout<<"La descripcion del producto dentro de la venta es de: "<< (*x).producto.descripcion<<endl;
    cout<<"El monto total es de: "<< ((*x).producto.precio)*((*x).cantidad)<<endl;

}
