#include "DB.h"

DB::DB()
{
}

void DB::insertar(Producto P)
{
   archivo.open("productos.txt",ios::app);
   while(!archivo.eof()){
    archivo<<P.codigo+" "+P.p_venta+" "+P.stock;
   }
   archivo.close();
}
void DB::seleccionar()
{
    string busqueda;
    cout<<"Digite su producto a seleccionar:";cin>>busqueda;
    bool encontrado = false;
    archivo.open("productos.txt");
    while(!archivo.eof())
    {
        archivo>>texto;
        if(texto==busqueda){
            encontrado = true;

        }
        archivo>>texto;
    }
}

void DB::eliminar()
{
    archivo.open("productos.txt");
    archivo2.open("removidos.txt");
    string eliminar;
    cout<<"Digite su producto a eliminar:";cin>>eliminar;
    bool encontrado = false;

    while(!archivo.eof())
    {
        archivo>>texto;
        if(texto==eliminar){
            encontrado = true;
            //Imprimimos lo que vamos a eliminar
            cout<<"Eliminado";
        }
        else
        {
           archivo2;
        }
        archivo>>texto;
    }
    if(encontrado=false){
        cout<<"No se encontro su producto";
    }
    archivo.close();
    archivo2.close();
    remove("productos.txt");
    rename("productos2.txt","productos.txt");
}
