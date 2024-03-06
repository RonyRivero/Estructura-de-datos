#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(void) 
{

}
Vector::~Vector(void) 
{

}
void Vector::Set_n(int _n) {
	//Da valor al atributo n osetea
	n = _n;
}
int Vector::Get_n() {
	return n;
}
void Vector::CargarVector(int _vect[], int _n) {
	for (int i = 0; i < _n; i++){
		cout << "Ingresar el valor de vect[" << i << "]= ";
		cin >> _vect[i];
	}
}
int Vector::MostrarVector(int _vect[]) {
	for (int i = 0; i < n; i++)
	{
		cout << "el valor de vect [" << i << "]= " << _vect[i] << endl;
	}
	return 0;
}
void Vector::Ordenar(int _vect[]) {
	int aux;
	for (int i = 0; i < n-1; i++){
		for (int j = i; j < n; j++) {
			if (_vect[i] > _vect[j]) {
				aux = _vect[i];
				_vect[i] = _vect[j];
				_vect[j] = aux;
			}
		}
	}
}
int Vector::PromedioVec(int _vect[], int _n) {
	int prom, aux = 0;
	for (int i = 0; i < _n; i++)
	{
		aux += _vect[i];
	}
	prom = aux/_n;
	return prom;
}
