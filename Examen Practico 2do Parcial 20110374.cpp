//Jose Rafael Ruiz Gudi�o 2�P Registro 20110374
//EXAMEN 2� PARCIAL
#include <iostream>
using namespace std;

class Rafael{
    private:
    string nombre, registro, materia;
    int cal1, cal2, cal3;
    public:
    Rafael(string,string,string,int,int,int);
    void datos();
    void ingresarCalificacion();
    void resultadoPromedio();
};
Rafael::Rafael(string _nombre, string _registro, string _materia,int _cal1, int _cal2, int _cal3){
    nombre=_nombre;
    registro=_registro;
    materia=_materia;
    cal1=_cal1;
    cal2=_cal2;
    cal3=_cal3;
}
void Rafael::datos(){
    cout<<"Ingresa el nombre: "<<endl; cin>>nombre;
    cout<<"Ingresa tu numero de registro: "<<endl; cin>>registro;
    cout<<"Ingresa el nombre de tu materia: "<<endl; cin>>materia;
}
void Rafael::ingresarCalificacion(){
    int calificacion;
    cout<<"Ingresa la primera calificacion obtenida: "<<endl; cin>>cal1;
    if(cal1<0||cal1>100){
        cout<<"\n\nERROR DE CALIFICACION!!!!!!!"<<endl;
        return;
    }
    cout<<"Ingresa la segunda calificacion obtenida: "<<endl; cin>>cal2;
    if(cal2<0||cal2>100){
        cout<<"ERROR DE CALIFICACI�N"<<endl;
        return;
    }
    cout<<"Ingresa la tercera calificacion obtenida: "<<endl; cin>>cal3;
    if(cal3<0||cal3>100){
        cout<<"ERROR DE CALIFICACI�N"<<endl;
        return;
    }
    calificacion=(cal1+cal2+cal3)/3;
    cout<<"El promedio total es de: "<<calificacion<<endl;
}
void Rafael::resultadoPromedio(){
    int calificacion;
    calificacion=(cal1+cal2+cal3)/3;
    if(calificacion<=60){
        cout<<"REPROBASTE"<<endl;
    }else if(calificacion<=75){
        cout<<"SUPERATE"<<endl;
    }else if(calificacion<=85){
        cout<<"MUY BIEN"<<endl;
    }else if(calificacion>85){
        cout<<"EXCELENTE"<<endl;
    }
}

int main()
{
    Rafael r1("","","",0,0,0);
    r1.datos();
    r1.ingresarCalificacion();
    r1.resultadoPromedio();

    return 0;
}
