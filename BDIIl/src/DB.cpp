#include "DB.h"

DB::DB()
{
}

void DB::insertar(Producto P)
{
   string dato;
   dato = P.codigo+" "+P.p_venta+" "+P.stock;
   archivo.open("productos.txt");
   while(!archivo.eof()){
    archivo<<dato;
   }
   archivo.close();
}


/*void DB:seleccionar()
{

}
void DB::visualizar(){
    string STRING;
    archivo.open("productos.txt");
        while(!archivo.eof()){
	        getline(archivo,STRING);
	        cout<<STRING<<endl;
        }
	archivo.close();
}


string ingresados[3];
    string ingresar[3] = {"Ingrese el codigo", "Ingrese el precio de venta", "Ingrese el stock"};
        for(int i=0;i<3;i++){
        cout<<ingresar[i]<<endl;
        cin>>ingresados[i];
}
    cout<<" "<<endl;
    for(int a=0;a<3;a++){
        cout<<ingresados[a]<<endl;
    }
    */
