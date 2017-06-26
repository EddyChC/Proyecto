#include "Producto.h"

Producto::Producto(){
	this->codigo = " ";
	this->p_venta = " ";
	this->stock = " ";
}
Producto::Producto(const Producto &P)
{
    codigo = P.codigo;
    p_venta = P.p_venta;
    stock = P.stock;
}
Producto::Producto(string codigo,string p_venta,string stock)
{
    codigo = codigo;
    p_venta = p_venta;
    stock = stock;
}
/*


Producto::Producto(string algo){


	this->codigo = " ";
	this->p_venta = " ";
	this->stock = " ";
}
*/

string Producto::getCodigo(){return codigo;}
string Producto::getPventa(){return p_venta;}
string Producto::getStock(){return stock;}


void Producto::setCodigo(string codigo){this->codigo = codigo;}
void Producto::setPventa(string p_venta){this->p_venta = p_venta;}
void Producto::setStock(string stock){this->stock = stock;}



