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
  Electrodomestico(){
         precio=100;
   color="blanco";
   consumo='F';
   peso=5;
  }
  
  Electrodomestico(int _precio, string _color){
    if(comprobarColor(_color)){
        color=_color;
        
    }else{
        color="blanco";
    }  
    
    precio=_precio;
  }
   Electrodomestico(int _precio, string _color, char _consumo, int _peso){
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
  
  void leer(){
      cout<<"El color es:\n"<<color<<endl;
      cout<<"El costo es de:\n"<<precio<<endl;
      cout<<"El consumo de energia es de:\n"<<consumo<<endl;
      cout<<"El peso total es de:\n"<<peso<<endl;

  }
  bool comprobarConsumoEnergetico(char e1){
      if(e1 == 'A' || e1 == 'B' || e1 == 'C' || e1 == 'D' || e1 == 'E' || e1 == 'F'){
          return true;
      }else{
          return false;
      }
  }
   bool comprobarColor(string e1){
      if(e1 == "Blanco" || e1 == "Negro" || e1 == "Rojo" || e1 == "Azul" || e1 == "Gris"){
          return true;
      }else{
          return false;
      }
  }
  
  void precioFinal(){
      if(consumo=='A'){
          cout<<"Precio de Tipo A: "<<precio<<endl;
      }
      if(consumo=='B'){
          cout<<"Precio de Tipo B: "<<precio<<endl;
      }
      if(consumo=='C'){
          cout<<"Precio de Tipo C: "<<precio<<endl;
      }
      if(consumo=='D'){
          cout<<"Precio de Tipo D: "<<precio<<endl;
      }
      if(consumo=='E'){
          cout<<"Precio de Tipo E: "<<precio<<endl;
      }
      if(consumo=='F'){
          cout<<"Precio de Tipo F: "<<precio<<endl;
      }
  }
      
};

int main()
{
    
  Electrodomestico e1=Electrodomestico();
  cout<<"\t\tINFORMACION DEL ELECTRODOMESTICO\n\n-------------------------------------------------------\n"<<endl;
  e1.leer();
  e1.precioFinal();
    return 0;
}

