// A2.4 - Programa 3: Clase Password.
//Jose Rafael Ruiz Gudiño 2P 20110374
#include <iostream>
#include <string.h>
using namespace std;

class Electrodomestico{
private:
  int precio;
  int peso;
  char consumo;
  string color;
public:
  Electrodomestico ();
  Electrodomestico (int _precio, string _color);
  Electrodomestico(int _precio, string _color, char _consumo, int _peso);
  void leer();
  bool comprobarConsumoEnergetico();
  bool comprobarColor();
  void precioFinal();
};

  Electrodomestico::Electrodomestico(){
   precio=100;
   color="blanco";
   consumo='F';
   peso=5;
  }
  Electrodomestico::Electrodomestico(int _precio, string _color){
    if(comprobarColor(_color)){
        color=_color;
        
    }else{
        color="blanco";
    }  
    
    precio=_precio;
  }
  
  Electrodomestico::Electrodomestico(int _precio, string _color, char _consumo, int _peso){
    if(comprobarColor(_color)){
        color=_color;
        
    }else{
        color="blanco";
    }  
    if(comprobarConsumoEnergetico(_consumo)){
        consumo=_consumo;
    }else{
        consumo='F';
    }
    precio=_precio;

    peso=_peso;
  }
  void Electrodomestico::leer () {
      cout<<"El color es:"<<color<<endl;
      cout<<"El precio es:"<<precio<<endl;
      cout<<"El consumo es:"<<consumo<<endl;
      cout<<"El peso es:"<<peso<<endl;

  }
  bool Electrodomestico::comprobarConsumoEnergetico (char e1){
      if(e1 == 'A' || e1 == 'B' || e1 == 'C' || e1 == 'D' || e1 == 'E' || e1 == 'F'){
          return true;
      }else{
          return false;
      }
  }
   bool Electrodomestico::comprobarColor (string e1){
      if(e1 == "blanco" || e1 == "negro" || e1 == "rojo" || e1 == "azul" || e1 == "gris"){
          return true;
      }else{
          return false;
      }
  }
  
  void Electrodomestico::precioFinal (){
      if(consumo=='A'){
          cout<<"precio tipo A: "<<precio<<endl;
      }
      if(consumo=='B'){
          cout<<"precio tipo B: "<<precio<<endl;
      }
      if(consumo=='C'){
          cout<<"precio tipo C: "<<precio<<endl;
      }
      if(consumo=='D'){
          cout<<"precio tipo D: "<<precio<<endl;
      }
      if(consumo=='E'){
          cout<<"precio tipo E: "<<precio<<endl;
      }
      if(consumo=='F'){
          cout<<"precio tipo F: "<<precio<<endl;
      }
  }
  
int main (){
  Electrodomestico e1=Electrodomestico();
  e1.leer();
  e1.precioFinal();
  return 0;
}

