#include "Pila.h"
#include <iostream>
#include <string>

using namespace std;

Pila::Pila() {
    tope = NULL;
}

void Pila::push() {
    string valor;
    string valor2;
    Nodo* aux = new Nodo; //NEW NODO PARA DECLARAR UN OBEJTO DE LA CLASE NODO Y UN PUNTERO AUX Q APUNTE A ESE OBJETO DE NODO ya que no sabemos en donde esta
    // ubica espacio de memoria para crear una instancia del Nodo: operator new (Nodo))
   // y entonces construye un objeto en el nuevo espacio ubicado
    system("cls");
    cout << "Ingresa la placa: ";
    cin >> valor;
    cout << "Ingresa el modelo: ";
    cin.ignore();
    getline(cin, valor2);
    aux->placa = valor;
    aux->modelo = valor2;
    aux->sig = NULL;
    //Accede al elemento dato de Nodo y le asigna valor.
    if (tope != NULL)
        aux->sig = tope;
    tope = aux;
    cout << "Nuevo proceso insertado en la Pila!\n";
    system("pause");
}

void Pila::pop() {
    Nodo* temp = new Nodo;
    if (tope == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
        system("pause");
    }
    else {
        temp = tope;
        tope = tope->sig;
        system("cls");
        cout << "\nEl proceso eliminado es: " << temp->placa << " - " << temp->modelo << "\n" << endl;
        delete temp;
        system("pause");
    }
}

void Pila::show() {
    Nodo* aux1 = tope;
    if (tope == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
        system("pause");
    }
    else {
        system("cls");
        cout << "Procesos:\n" << endl;
        while (aux1 != NULL) {
            cout << aux1->placa << " - " << aux1->modelo << "\n" << endl;
            aux1 = aux1->sig;
        }
        system("pause");
    }
}

void Pila::top() {
    Nodo* aux1 = tope;
    if (tope == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
        system("pause");
    }
    else {
        system("cls");
        cout << "Proceso TOP:\n" << endl;
        cout << aux1->placa << " - " << aux1->modelo << "\n" << endl;
        system("pause");
    }
}

void Pila::size() {
    Nodo* aux1 = tope;
    if (tope == NULL) {
        system("cls");
        cout << "\nLa Pila esta vacia!\n\n";
        system("pause");
    }
    else {
        int contador = 0;
        while (aux1) {
            contador++;
            aux1 = aux1->sig;
        }
        system("cls");
        cout << "El tamano de la Pila es: '" << contador << "'\n" << endl;
        system("pause");
    }
}
