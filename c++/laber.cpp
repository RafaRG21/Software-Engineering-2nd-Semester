#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
using std::vector;

struct Nodo{
	
	    int dato;
	    struct Nodo *izq;
	    struct Nodo *der;
};

struct Nodo *insertarNodo(int dato)
{
	struct Nodo *nuevoNodo = new Nodo;
	nuevoNodo->dato = dato;
	nuevoNodo->izq = nuevoNodo->der = NULL;
	
return nuevoNodo;
}

bool path(Nodo *laberinto, vector<int> &arr, int x)
{
	if(!laberinto)
	return false;
	
	arr.push_back(laberinto->dato);
	
	if(laberinto->dato = x)
	return true;
	
	if(path(laberinto->izq, arr, x) || path (laberinto->der, arr, x))
	return true;
	
	arr.pop_back();
	return false;
}

void showPath(Nodo *laberinto, int x)
{
	vector<int> arr;
	
	if(path(laberinto, arr, x))
	{
		for(int i=0; i < arr.size()-1; i++)
		cout <<arr[i] << "->";
		cout << arr[arr.size()-1];
	}
	else
	cout <<"No hay camino";
}

int main()
{
	struct Nodo *laberinto=insertarNodo(1);
	laberinto->der=insertarNodo(2);
	laberinto->der->der=insertarNodo(3);
	laberinto->der->der->der=insertarNodo(11);
	laberinto->der->der->der->der=insertarNodo(12);
	laberinto->der->der->der->der->der=insertarNodo(4);
	laberinto->der->der->der->der->der->der=insertarNodo(5);
	laberinto->der->der->der->der->der->der->der=insertarNodo(6);
	laberinto->der->der->der->der->der->der->der->der=insertarNodo(14);
	laberinto->der->der->der->der->der->der->der->der->der=insertarNodo(13);
	laberinto->der->der->der->der->der->der->der->der->der->der=insertarNodo(21);
	laberinto->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(29);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(28);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(36);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(37);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(45);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(46);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(47);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(48);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(40);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(32);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(24);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(16);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(15);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(7);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(8);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq=insertarNodo(23);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der=insertarNodo(31);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der=insertarNodo(39);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der=insertarNodo(38);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der=insertarNodo(30);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der=insertarNodo(322);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq=insertarNodo(56);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der=insertarNodo(55);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der=insertarNodo(63);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq=insertarNodo(54);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der=insertarNodo(53);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der=insertarNodo(61);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der=insertarNodo(62);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->izq=insertarNodo(60);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq=insertarNodo(44);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der=insertarNodo(52);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der=insertarNodo(51);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der=insertarNodo(50);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der=insertarNodo(42);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der=insertarNodo(34);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der=insertarNodo(33);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der=insertarNodo(25);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der=insertarNodo(26);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der=insertarNodo(18);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->der=insertarNodo(19);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->der->der=insertarNodo(20);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->der->izq=insertarNodo(27);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->der->izq->der=insertarNodo(35);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->der->izq->der->der=insertarNodo(43);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->izq=insertarNodo(17);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->izq->der=insertarNodo(9);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->der->der->der->izq->der->der=insertarNodo(10);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->izq=insertarNodo(41);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->izq->der=insertarNodo(49);
	laberinto->der->der->der->der->der->der->der->der->der->der->der->der->der->der->der->izq->der->der->der->der->der->der->izq->der->der=insertarNodo(57);
	
	int x=0;
	
	cout << "Elige un numero para llegar\n";
	cout << "Camino:";
	cin >> x;
	cout << "\n";
	showPath(laberinto, x);
	return 0;
}
