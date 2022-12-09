#include<iostream>
#include<cstring>
using namespace std;
struct Nodo{
 string dato;
 struct Nodo *izq;
 struct Nodo *der;
};
///////////////////////creacion de un nodo/////////////////
// size_t es un tipo de dato sin signo , que es nmayor a 0
Nodo *nuevonodo(string dato){
 //se pide el espacio en memoria para el nuevo nodo
Nodo *nodo = new Nodo();
// Asignar el dato al iniciar
nodo->dato=dato;
nodo->izq=nodo->der=NULL;
return nodo;
}
void insertar(Nodo *nodo,string dato);
void preorden(Nodo *nodo,string n);
void inorden(Nodo *nodo);
void postorden(Nodo *nodo);

void printBFS(Nodo* a, int nivel);
void cicloBFS(Nodo* a);
int altura(Nodo* a);
void laberinto();
string array[100];
int cont=0;
int main() {
	
Nodo *raiz=nuevonodo("A3");
raiz->der=nuevonodo("B3");
raiz->der->der=nuevonodo("C3");
raiz->der->der->izq=nuevonodo("C2");
raiz->der->der->der=nuevonodo("C4");
raiz->der->der->der->der=nuevonodo("C5");
raiz->der->der->der->der->der=nuevonodo("C6");
raiz->der->der->der->der->der->der=nuevonodo("C7");
raiz->der->der->der->der->der->der->der=nuevonodo("D7");	
raiz->der->der->der->der->der->der->der->der=nuevonodo("E7");
raiz->der->der->der->der->der->der->der->der->izq=nuevonodo("E8");
raiz->der->der->der->der->der->der->der->der->der=nuevonodo("E6");
raiz->der->der->der->der->der->der->der->der->der->izq=nuevonodo("E5");
raiz->der->der->der->der->der->der->der->der->der->izq->izq=nuevonodo("E4");
raiz->der->der->der->der->der->der->der->der->der->izq->izq->izq=nuevonodo("E3");
raiz->der->der->der->der->der->der->der->der->der->izq->izq->izq->izq=nuevonodo("E2");
raiz->der->der->der->der->der->der->der->der->der->izq->izq->izq->izq->izq=nuevonodo("F2");
raiz->der->der->der->der->der->der->der->der->der->izq->izq->izq->izq->izq->izq=nuevonodo("F1");
raiz->der->der->der->der->der->der->der->der->der->der=nuevonodo("F6");
raiz->der->der->der->der->der->der->der->der->der->der->izq=nuevonodo("G6");
raiz->der->der->der->der->der->der->der->der->der->der->izq->izq=nuevonodo("G5");
raiz->der->der->der->der->der->der->der->der->der->der->izq->izq->izq=nuevonodo("G4");
raiz->der->der->der->der->der->der->der->der->der->der->izq->izq->izq->izq=nuevonodo("H4");
raiz->der->der->der->der->der->der->der->der->der->der->izq->izq->izq->izq->izq=nuevonodo("H3");

 cout<<" Preorden\n";
 preorden(raiz,"E8");
 
 cout<<"\n Inorden\n";
 inorden(raiz);

 cout<<"\n Postorden\n";
 postorden(raiz);

 cout<<"\n Metodo BFS (Busqueda en anchura) \n";
 cicloBFS(raiz);

cout<<"\n\n";

 cout<<"Borrar 6: ";
 postorden(raiz);

 cout<<"\n";
 
 cout<<"Borrar 11: ";
 postorden(raiz);



 cout<<"\n\n";
 laberinto();
 cout<<"\nCamino: ";
 for(int i=0;i<cont;i++){
 	cout<<array[i]<<"->";
 }



return 0;
}
void laberinto(){
	char a= 219;
	cout<<"   | 12345678"<<endl;
	cout<<"------------------"<<endl;
	cout<<"A  | "<<a<<a<<" "<<a<<a<<a<<a<<a<<" |  A"<<endl;
	cout<<"B  | "<<a<<a<<" "<<a<<a<<a<<a<<a<<" |  B"<<endl;
	cout<<"C  | "<<a<<" "<<" "<<" "<<" "<<" "<<" "<<a<<" |  C"<<endl;
	cout<<"D  | "<<a<<a<<a<<a<<a<<a<<" "<<a<<" |  D"<<endl;
	cout<<"E  | "<<a<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" |  E"<<endl;
	cout<<"F  | "<<" "<<" "<<a<<a<<a<<" "<<a<<a<<" |  F"<<endl;
	cout<<"G  | "<<a<<a<<a<<" "<<" "<<" "<<a<<a<<" |  G"<<endl;
	cout<<"H  | "<<a<<a<<" "<<" "<<a<<a<<a<<a<<" |  H"<<endl;
	cout<<"------------------"<<endl;
	cout<<"   | 12345678 |"<<endl;	
}

void preorden(Nodo *nodo, string n){
	bool band=false;
	if(nodo){
preorden(nodo->izq, n);
preorden(nodo->der, n);
}
 }


void inorden( Nodo *nodo){
if(nodo!=NULL){
inorden(nodo->izq);
cout<<nodo->dato<<" ";
inorden(nodo->der);
}
}
void postorden( Nodo *nodo){
if(nodo!=NULL){
postorden(nodo->izq);
postorden(nodo->der);
 cout<<nodo->dato<<" ";
}
}

void cicloBFS(Nodo* a)
{
 int h = altura(a);
 int i;
 for (i = 1; i <= h; i++)
 printBFS(a, i);
}
/* Imprime los nodos del mismo nivel */
void printBFS(Nodo* a, int nivel)
{
 if (a == NULL)
 return;
 if (nivel == 1)
 cout<<a->dato<<" ";
 else if (nivel > 1) {
 // printf("%d, %d \n", a->dato, nivel);
 printBFS(a->izq, nivel - 1);
 printBFS(a->der, nivel - 1);
 }
}
int altura(Nodo* a)
{
 if (a == NULL)
 return 0;
 else {

 int ialtura = altura(a->izq);
 int daltura = altura(a->der);
 if (ialtura > daltura)
 return (ialtura + 1);
 else
 return (daltura + 1);
 }
}

