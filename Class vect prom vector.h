#pragma once
#define MAX 10
class Vector
{
	private:
		int vect[MAX];
		int n;
	public:
		Vector(void);
		~Vector(void);
		void Set_n(int _n);
		int Get_n();
		void CargarVector(int _vect[], int _n);
		int MostrarVector(int _vect[]);
		void Ordenar(int _vect[]);
		int PromedioVec(int _vect[], int _n);
};
