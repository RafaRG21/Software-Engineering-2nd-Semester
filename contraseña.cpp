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

    Password ()
  {


  }
  Password (int _logitud)
  {

    longitud = _logitud;
    int v4, i = _logitud;


    while (i > 0)
      {
	v4 = rand () % 100 + 32;
	contrasena += char (v4);
	i--;
      }




  }
  bool  esFuerte ()
  {
      int minus=0,mayus=0,numero=0;
      
      int d=contrasena.size()-1;
    while (d>=0)
      {
if(int(contrasena[d])>65&&int(contrasena[d])<90){
    mayus++;
    
}
if(int(contrasena[d])>97&&int(contrasena[d])<123){
    minus++;
    
}
if(int(contrasena[d])>47&&int(contrasena[d])<58){
    numero++;
    
}

d--;
      }
      
      
      if(mayus>1&&minus>0&&numero>4){
          return true;
          
      }else{
          return false;
      }

  }

  void generar ()
  {
    int v4, i = longitud;
    contrasena = "";

    while (i > 0)
      {
	v4 = rand () % 100 + 32;
	contrasena += char (v4);
	i--;
      }

  }
  void leer ()
  {

    cout << "La longitud es: " << longitud << endl;
    cout << "La contraseC1a es: " << contrasena << endl;


  }



};



int
main ()
{
  int longitud;
  cout << "Digita la longitud del Password " << endl;
  cin >> longitud;
  Password x = Password (longitud);
  x.leer ();
  x.generar ();
  x.leer ();
if(  x.esFuerte()){
    cout<<"es segura"<<endl;
}else{
    cout<<"no es segura"<<endl;
}





  return 0;
}

