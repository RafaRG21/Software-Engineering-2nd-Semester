#include<iostream>
using namespace std;

//Definici�n de la Clase Persona, con sus Atributos y sus M�todos
class Persona{
    private: //Abstracci�n de los Atributos de la Clase
      int edad;
      string nombre;
    public: //Definimos los M�todos de la Clase
      Persona(int _edad, string _nombre) //Constructor de la Clase
      {
        edad=_edad;
        nombre=_nombre;
      }
      
      void mostrar(){
        cout<<"Soy "<<nombre<<", y tengo "<<edad<<" a�os."<<endl;
      }
      void modificarDatos(){
      	cout<<"Escriba su nuevo nombre: "; cin>>nombre;
      	cout<<"Escriba su nueva edad: "; cin>>edad;
	  }
      
};

int main() {
  //Se puede realizar la declaraci�n o crear un objeto llamado p1 de tipo Persona de esta primera forma
  Persona p1=Persona(20, "Jorge");
  
  //Forma 2, podemos realizar la declaraci�n de este modo, inicializamos el objeto p2 de la misma clase Persona
  Persona p2(22, "Maria");
  
/**/
  p1.mostrar();
  p2.mostrar();
  p1.modificarDatos();
  p2.modificarDatos();
  p1.mostrar();
  p2.mostrar();
 
}
