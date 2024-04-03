#pragma once
#include "Nodo.h"

class Pila {
		Nodo* tope;
public:
		Pila();
		void push();
		void pop();
		void show();
		void top();
		void size();
	};
