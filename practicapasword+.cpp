
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

class Password
{

private:
  int longitud;
  string contrasena;

public:
  Password();
  Password(int _longitud);
  bool esFuerte ();
  void generar ();
  void leer ();
};

  Password::Password () {}
  Password::Password (int _longitud)
  {
    longitud = _longitud;
    int a, i = _longitud;
    while (i > 0)
      {
	a = rand () % 100 + 32;
	contrasena += char (a);
	i--;
      }
  }
  bool  Password::esFuerte ()
  {
      int minuscula=0,mayuscula=0,numero=0;
      
      int b=contrasena.size()-1;
    while (b>=0)
      {
if(int(contrasena[b])>65&&int(contrasena[b])<90){
    mayuscula++;
    
}
if(int(contrasena[b])>97&&int(contrasena[b])<123){
    minuscula++;
    
}
if(int(contrasena[b])>47&&int(contrasena[b])<58){
    numero++;
    
}

b--;
      }
      if(mayuscula>1&&minuscula>0&&numero>4){
          return true;
          
      }else{
          return false;
      }
  }

  void Password::generar()
  {
    int a, i = longitud;
    contrasena = "";

    while (i > 0)
      {
	a = rand () % 100 + 32;
	contrasena += char (a);
	i--;
      }
  }
  void Password::leer ()
  {
    cout << "La longitud es: " << longitud << endl;
    cout << "La contrasena es: " << contrasena << endl;
  }

int
main ()
{
  int longitud;
  cout << "Digita la longitud del Password " << endl;
  cin >> longitud;
  Password p1 = Password (longitud);
  p1.leer ();
  p1.generar ();
  p1.leer ();
if(  p1.esFuerte()){
    cout<<"Es segura la contrasena"<<endl;
}else{
    cout<<"No es segura la contrasena"<<endl;
}
  return 0;
}

