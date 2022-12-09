// A2.3 - Programa 2: Clase Cuenta.
//Jose Rafael Ruiz Gudi�o 2P 20110374
#include<iostream>
#include<string.h>
using namespace std;


class Cuenta{
    private: 
      string titular;
      float cantidad;
    public: 
      Cuenta(string _titular, float _cantidad);
      void mostrar();
      void ingresar();
      void retirar();
      
};


Cuenta::Cuenta(string _titular, float _cantidad)
{
  titular=_titular;
  cantidad=_cantidad;
}

void Cuenta::mostrar()
{
  cout<<"\nNombre del Titular: "<<titular<<endl;
  cout<<"Saldo en la cuenta: "<<cantidad<<endl;
}

void Cuenta::ingresar(){
	float dinero=0;
	cout<<"\nDigite la cantidad a ingresar:"<<endl; cin>>dinero;
	if(dinero>0){
		cantidad += dinero;
	}
	
}
void Cuenta::retirar(){
	float dinero=0;
	cout<<"\nDigite la cantidad a retirar:"<<endl;cin>>dinero;
	if(cantidad<dinero){
		cout<<"\n\nFONDOS INSUFICIENTES\n"<<endl;
	}
	else cantidad -= dinero;
}

int main() {
   float saldo=0;
   string nombre;
   cout<<"Escriba el nombre del Titular:"<<endl; cin>>nombre;
   cout<<"Digite el saldo de su cuenta:"<<endl; cin>>saldo;
   Cuenta c1 = Cuenta(nombre, saldo);
   c1.mostrar();
   c1.ingresar();
   c1.mostrar();
   c1.retirar();
   c1.mostrar();
 
  
  return 0;
 
}
