#include<iostream>

using namespace std;

struct Producto {
	float precio;
	string nombreProducto;
	string categoria;
	struct Fecha;
};

struct Fecha {
	int dia;
	int mes;
	int anio;
};

int main() {
	float Precio;
	string nombreProducto;
	int Dia;
	cout << "Ingrese precio del producto" << endl;
	cin >> Precio;
	cout << "Ingrese precio del producto" << endl;
	cin >> nombreProducto;
	Producto info;
	Fecha fechaDeCompra;
	info.precio = Precio;
	info.nombreProducto = nombreProducto;
	fechaDeCompra.dia = Dia;
	string Saludo;
	int booli = false;
	
if (!booli)
{
	cout<< "Bool falso"<< endl;
}

    
	cout<<"Escribi un saludo "<<endl;
	cin>>Saludo;
	
	cout<<Saludo;
	return 0;
}