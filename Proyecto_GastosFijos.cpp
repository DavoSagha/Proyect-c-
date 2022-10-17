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

void producto() {
	float precio;
	string nombreProducto;
	string categoria;
	char stock[500+1];
	int dia, mes, anio;


	cout << "Ingrese precio del producto" << endl;
	cin >> precio;
	cout << "Ingrese nombre del producto" << endl;
	cin >> nombreProducto;
	cout << "Ingrese categoría del producto" << endl;
	cin >> categoria;
	cout << "Ingrese Numero del producto" << endl;
	cin >> stock;
	cout << "Ingrese la fecha de registro del producto"<< endl;
	cin >> dia;
	cin >> mes;
	cin >> anio;
	fecha(dia, mes, anio);
}

int main() {
	
	producto();

	/*Fecha fechaDeCompra;
	fechaDeCompra.dia = dia;
	fechaDeCompra.mes = mes;
	fechaDeCompra.anio = anio;*/
  
	
	return 0;
}