#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Producto{
public:
	string codigo;
	string p_venta; //costo y utilidad
	string stock ; //ganancia
	fstream archivo;

public:
	Producto();
	Producto(const Producto &P);
	Producto(string,string,string);
	string getCodigo();
    string getPventa();
	string getStock();
	//set
	void setCodigo(string codigo);
    void setPventa(string p_venta);
    void setStock(string stock);
};

#endif // PRODUCTO_H
