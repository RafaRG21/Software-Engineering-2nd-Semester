#include <iostream>
using namespace std;

class Armando{
    private:
    string nombre, registro, materia;
    int cal1, cal2, cal3;
    public:
    Armando(string,string,string,int,int,int);
    void ingresar();
    void resultado();
    void mostrar();
};
Armando::Armando(string _nombre, string _registro, string _materia,int _cal1, int _cal2, int _cal3){
    nombre=_nombre;
    registro=_registro;
    materia=_materia;
    cal1=_cal1;
    cal2=_cal2;
    cal3=_cal3;
}
void Armando::ingresar(){
    cout<<"Ingresa tu nombre: "<<endl; cin>>nombre;
    cout<<"Ingresa tu registro: "<<endl; cin>>registro;
    cout<<"Ingresa tu materia: "<<endl; cin>>materia;
}
void Armando::resultado(){
    int calificacion;
    cout<<"Ingresa la primera calificacion: "<<endl; cin>>cal1;
    if(cal1<0||cal1>100){
        cout<<"ERROR DE CALIFICACIÓN"<<endl;
        return;
    }
    cout<<"Ingresa la primera calificacion: "<<endl; cin>>cal2;
    if(cal2<0||cal2>100){
        cout<<"ERROR DE CALIFICACIÓN"<<endl;
        return;
    }
    cout<<"Ingresa la primera calificacion: "<<endl; cin>>cal3;
    if(cal3<0||cal3>100){
        cout<<"ERROR DE CALIFICACIÓN"<<endl;
        return;
    }
    calificacion=(cal1+cal2+cal3)/3;
    cout<<"La calificacion total es: "<<calificacion<<endl;
}
void Armando::mostrar(){
    int calificacion;
    calificacion=(cal1+cal2+cal3)/3;
    if(calificacion<=60){
        cout<<"REPROBASTE"<<endl;
    }else if(calificacion>60&&calificacion<=75){
        cout<<"SUPERATE"<<endl;
    }else if(calificacion>75&&calificacion<=85){
        cout<<"MUY BIEN"<<endl;
    }else if(calificacion>85){
        cout<<"EXCELENTE"<<endl;
    }
}


int main()
{
    Armando a1("","","",0,0,0);
    a1.ingresar();
    a1.resultado();
    a1.mostrar();

    return 0;
}
