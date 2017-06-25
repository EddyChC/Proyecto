#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Ask.h"
#include <vector>
#include <string>
#include<fstream>

class DB{
protected:
    Producto P;
public:
    DB();
    //vector<Producto> productitos;
    fstream archivo;
    void insertar(Producto P);
    /*void seleccionar();
    void eliminar();
    void actualizar();
    void visualizar();
    void consultar();*/

};

#endif // DB_H
