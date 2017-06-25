#include "Ask.h"
string Ask::askCodigo()
{
    string codigo;
    cout<<"Ingrese el codigo de su Producto: ";
    cin>>codigo;
    return codigo;
}
/*
string Ask::askStock()
{
    cout<<"Ingresa el stock: "<<endl;
    cin>> stock;
    return stock;
}

string Ask::askP_venta(string p_venta)
{
    cout<<"Ingresa el precio venta: "<<endl;
    cin>> p_venta;
    return p_venta;
}
*/
