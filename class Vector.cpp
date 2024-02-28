#include "Vector.h"
#include "iostream"
using namespace std;
Vector::Vector(void)
{
}// constructor
Vector::~Vector(void)
{
}//destructor
void Vector::setN(int _n)
{
	n = _n;
}
int Vector::getN()
{
	return n;
}
void Vector::cargarVector(int vec[], int n) //metodos
{
	for (int i = 0; i < n; i++) {
		cout << "vect[" << i << "] = ";
		cin >> vec[i];
	}
}
void Vector::mostrarVector(int vec[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << vec[i] << ", ";
	}
	cout << endl;
}
void Vector::ordenarVector(int vec[], int n)
{
	for (int i = 0; i < n; i++) {
		int aux;
		for (int i = 0; i < (n - 1); i++) {
			for (int j = i; j < n; j++) {
				if (vec[i] > vec[j]) {
					aux = vec[i];
					vec[i] = vec[j];
					vec[j] = aux;
				}
			}
		}
	}
}
