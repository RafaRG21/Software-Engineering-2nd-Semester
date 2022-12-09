

#include <iostream>
#include <string.h>

using namespace std;


class Cuenta{
    private:
    string titular;
    float cantidad;
    
    public:
    Cuenta(string _titular, float _cantidad){
        titular=_titular;
        cantidad=_cantidad;
    }
    Cuenta(string _titular){
        titular=_titular;
        cantidad=0.0;
     
    }
    void mostrar(){
        cout<<"El nombre la cuenta es: "<<titular<<endl;
        cout<<"Los fondos de la cuenta es: "<<cantidad<<endl;
    }
    void ingresar(){
        float aux;
          cout<<"Ingrese la cantidad a depositar"<<endl;
          cin>>aux;
          cantidad+=aux;
           cout<<"Saldo despues de dispositar: "<<cantidad<<endl;
    }
    void retirar(){
        float aux;
          cout<<"Ingrese la cantidad a retirar"<<endl;
          cin>>aux;
          if(aux>cantidad){
               cout<<"No hay fondos suficientes"<<endl;
          }else{
          cantidad-=aux;
            cout<<"Saldo despues de retirar: "<<cantidad<<endl;
          }

    }
    
    
    
    
};

int main()
{
    string nombre;
    float saldo;
      cout<<"Creando una nueva cuenta"<<endl;
      cout<<"Digita el nombre de la cuenta"<<endl;
      cin>>nombre;
      cout<<"Digita el salndo de la cuenta"<<endl;
      cin>>saldo;
      
      
      
    Cuenta x=Cuenta(nombre, saldo);
    
    x.mostrar();
    x.ingresar();
    x.retirar();
    x.mostrar();
    
    
    return 0;
}

