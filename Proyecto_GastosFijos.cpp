#include<iostream>

using namespace std;

struct Producto {
	float precio;
	string nombreProducto;
	string categoria;
	string stock;
};

struct Fecha {
	int dia;
	int mes;
	int anio;
};

void fecha(Fecha f) {

	cout << f.dia << " | " << f.mes << " | " << f.anio;
}

void producto() {
	float precio;
	string nombreProducto;
	string categoria;
	int id;
	int dia, mes, anio;
	Fecha f;

	cout << "Ingrese nombre del producto" << endl;
	cin >> nombreProducto;
	cout << "Ingrese precio del producto" << endl;
	cin >> precio;
	cout << "Ingrese categoría del producto" << endl;
	cin >> categoria;
	cout << "Ingrese id del producto" << endl;
	cin >> id;
	cout << "Ingrese la fecha de registro del producto (dia, mes, anio.. en ese orden)" << endl;
	cin >> f.dia;
	cin >> f.mes;
	cin >> f.anio;
	cout << "Producto: " << nombreProducto << ", precio: " << precio << ", categoria: " << categoria << ", id: " << id << "\n Fecha de registro: " << endl;
	fecha(f);
	cout << "\n Registrado con exito." << endl;
}

int main() {

	producto();

	return 0;
}