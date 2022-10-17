#include<iostream>

using namespace std;

struct Producto {
	float precio;
	string nombreProducto;
	string categoria;
	//struct Fecha;
	string stock;
};

struct Fecha {
	int dia;
	int mes;
	int anio;
};

Fecha fecha (int dia, int mes, int anio){
	cout << dia << " | " << mes << " | " << anio;
}

void producto(float precio, string nombreProducto, string categoria, char stock[500+1], Fecha fecha) {
	cout << "Ingrese precio del producto" << endl;
	cin >> precio;
	cout << "Ingrese nombre del producto" << endl;
	cin >> nombreProducto;
	cout << "Ingrese categoría del producto" << endl;
	cin >> categoria;
	cout << "Ingrese Numero del producto" << endl;
	cin >> stock;
}

int main() {
	float Precio;
	string nombreProducto;
	string categoria;
	int dia, mes, anio;
	string Stock;

	fecha(10, 12, 2022);
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
	cout << "Ingrese Numero del producto" << endl;
	cin >> Stock;




	Producto info;
	info.precio = Precio;
	info.nombreProducto = nombreProducto;
	info.categoria = categoria;
	info.stock = Stock;

	/*Fecha fechaDeCompra;
	fechaDeCompra.dia = dia;
	fechaDeCompra.mes = mes;
	fechaDeCompra.anio = anio;*/
  
	
	return 0;
}