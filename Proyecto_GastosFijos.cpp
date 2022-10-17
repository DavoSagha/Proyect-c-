#include<iostream>

using namespace std;

struct Producto {
	float precio;
	string nombreProducto;
	string categoria;
	struct Fecha;
	char stock[500+1];
};

struct Fecha {
	int dia;
	int mes;
	int anio;
};



int main() {
	float Precio;
	string nombreProducto;
	string categoria;
	int dia, mes, anio;


	cout << "Ingrese precio del producto" << endl;
	cin >> Precio;
	cout << "Ingrese nombre del producto" << endl;
	cin >> nombreProducto;
	cout << "Ingrese día, mes y año (en ese orden) del producto" << endl;
	cin >> dia;
	cin >> mes;
	cin >> anio;
	cout << "Ingrese categoría del producto" << endl;
	cin >> categoria;




	Producto info;
	info.precio = Precio;
	info.nombreProducto = nombreProducto;
	info.categoria = categoria;

	Fecha fechaDeCompra;
	fechaDeCompra.dia = dia;
	fechaDeCompra.mes = mes;
	fechaDeCompra.anio = anio;
  
	
	return 0;
}