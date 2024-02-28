class Vector
{
	private:
		int vec[10], n;
	public:
		Vector(void); // constructor
		~Vector(void); //destructor
		void setN (int _n);
		int getN();
		void cargarVector(int vec[], int n); //metodos
		void mostrarVector(int vec[], int n);
		void ordenarVector(int vec[], int n);
};

