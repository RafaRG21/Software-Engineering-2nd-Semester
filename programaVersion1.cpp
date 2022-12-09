#include <iostream>

using namespace std;

//Definición de la Clase Persona, con sus Atributos y sus Métodos
class Persona{
    private: //Abstracción de los Atributos de la Clase
      int edad;
      string nombre;
    public: //Definimos los Métodos de la Clase
      Persona(int, string); //Constructor de la Clase
      void mostrar();
      void modificarDatos();
      
};

//Constructor, nos sirve para iniciar los Atributos
Persona::Persona(int _edad, string _nombre)
{
  edad=_edad;
  nombre=_nombre;
}

void Persona::mostrar()
{
  cout<<"Soy "<<nombre<<", y tengo "<<edad<<" años."<<endl;
}

void Persona::modificarDatos(){
	cout<<"Escriba su nuevo nombre: "; cin>>nombre;
	cout<<"Escriba su nueva edad: "; cin>>edad;
	
}

int main() {
  //Se puede realizar la declaración o crear un objeto llamado p1 de tipo Persona de esta primera forma
  Persona p1=Persona(20, "Jorge");
  
  //Forma 2, podemos realizar la declaración de este modo, inicializamos el objeto p2 de la misma clase Persona
  Persona p2(19, "Maria");

  p1.mostrar();
  p2.mostrar();
  p1.modificarDatos();
  p2.modificarDatos();
  p1.mostrar();
  p2.mostrar();
  
  
 
}
