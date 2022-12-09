#include <cstdlib>
#include <iostream>
using namespace std;
class Cola{   
public:
       int rear,front,prioridad,maxSize;
       string lista[100];
       void agregar(string ele);
       void borrar();
       string recuperar();
       int len();
       void mostrar();
       Cola();
        friend class multiCola;};
Cola::Cola(){
             rear=0;
             front=0;}
             
//agregar un elemto a la pila
void Cola::agregar(string ele){
     lista[rear]=ele;
     rear++;}
     
//retorna el primer valor de la cola
string Cola::recuperar(){
     front+=1;
     return lista[front-1];}
     
//largo de la cola   
int Cola::len(){
    int temp;
    temp=rear+maxSize-front+1;
    return temp%maxSize;}
    
//borrar un elemento
void Cola::borrar(){front+=1;}

//muestra el primer elemento que se metio a la cola
void Cola::mostrar(){
     cout<<lista[front]<<endl;
     front++;}
class multiCola{//clase multicola es una cola de colas
public:
       void incluir(int prioridad,string dato);
       void ver(); //muestra el dato que se metio de primero en la primera prioridad y asi sucesivamente hasta q llega a la ulyima cola de priodad mas baja
      Cola colas[3];};//se pone la cantidad de colas que se desean en la cola    
    
 //metodo para incluir un dato    
void multiCola::incluir(int prioridad, string dato){colas[prioridad-1].agregar(dato);}

//metodo para ver los datos almacenados
void multiCola::ver(){
     if(colas[0].rear!=colas[0].front){colas[0].mostrar();}
     else{if(colas[1].rear!=colas[1].front){colas[1].mostrar();}
     else{if(colas[2].rear!=colas[2].front){colas[2].mostrar();}}}}
             
int main(int argc, char *argv[]){
    multiCola prueba;    
    prueba.incluir(3,"estas");//se incluye el elemento estas en el orden de prioridad 3
    prueba.incluir(2,"como");
    prueba.incluir(1,"hola");
    prueba.incluir(1,"bienvenido");
    prueba.ver();//cada vez que se llama a ete metodo saca el dato de la cola
    prueba.ver();
    prueba.ver();
    prueba.ver();
    system("PAUSE");
    return EXIT_SUCCESS;}
