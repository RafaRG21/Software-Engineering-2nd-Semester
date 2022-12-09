/*
Desarrolle un programa, utilizando funciones con parámetros por referencia y arreglos unidimensionales, para resolver el siguiente problema:
En una tienda de productos naturales, cuenta con tres vendedores, que tienen un sueldo base de mil pesos, más bonos. 
De lunes a sábado se registran las ventas de cada uno, de las cuales al final de la semana se requiere saber para pagar los bonos de productividad y empleado de la semana:
*Promedio de ventas por cada vendedor
*Día de mayor venta (1-Lunes, 6-Sábado) por cada vendedor
*Vendedor que tuvo mayor  cantidad de venta
*Cantidad de venta por vendedor
Para el cálculo del sueldo semanal a pagar, será el sueldo base más el bono de productividad: 
Este bono será: para el que obtuvo mayor una mayor cantidad de ventas 10%, para los otros dos 8%. 
El empleado de la semana, será el que tuvo la mayor cantidad de ventas y tiene un bono adicional del 2% de sus ventas. 
Imprimir el sueldo total de cada empleado, indicando su desglose.
*/

//LIBRERIAS
#include<stdio.h>

//ENCABEZADO
void capture(int *seller);
void average(int *avg_sales);
void bestday(int *day);
void totalsales(int *tt_sales,int *topsale);
void bestseller(int *seller1,int *seller2,int *seller3,int *b1,int *b2,int *b3);
void pay(int *bn1,int *bn2,int *bn3);

//VARIABLES GLOBALES
int vendedor=1;
int i;

//MAIN
main(){
	int Aseller [6];
	int Bseller [6];
	int Cseller [6];
	int topsaleA=0,topsaleB=0,topsaleC=0;
	int bonoA=0,bonoB=0,bonoC=0;
	
	capture(Aseller);
	average(Aseller);
	bestday(Aseller);
	totalsales(Aseller,&topsaleA);

	capture(Bseller);
	average(Bseller);
	bestday(Bseller);
	totalsales(Bseller,&topsaleB); 
	
	capture(Cseller);
	average(Cseller);
	bestday(Cseller);
	totalsales(Cseller,&topsaleC);
		
	bestseller(&topsaleA,&topsaleB,&topsaleC,&bonoA,&bonoB,&bonoC);
	pay(&bonoA,&bonoB,&bonoC);
	
}

//FUNCIONES Y PROCEDIMIENTOS
void capture(int *seller){	
	printf("Inicializando proceso...\n");
	printf("Vendedor %i:\n",vendedor);
	for(i=0;i<6;i++){
		printf("Ventas Dia %i:",i+1);
		scanf("%i",&seller[i]);
	}
}
void average(int *avg_sales){	
	float promedio=0;
	
	for(i=0;i<6;i++){
		promedio+=avg_sales[i];	
	}
	
	promedio/=6;
	printf("Las ventas PROMEDIO del Vendedor %i son:%0.2f\n",vendedor,promedio);	
}
void bestday(int *day){
	int best=0;
	int dy=0;
	
	for(i=0;i<6;i++){
		if(day[i]>best){
			best=day[i];
			dy=i+1;
		}
	}
	printf("El dia con MEJOR venta para el Vendedor %i es:%i\n",vendedor,dy);
}
void bestseller(int *seller1,int *seller2,int *seller3,int *b1,int *b2,int *b3){
	if(*seller1>=*seller2&&*seller1>=*seller3){
		printf("EL VENDEDOR 1 FUE EL MEJOR****************************************************\n");
		*b1=1;	
	}
	if(*seller2>=*seller1&&*seller2>=*seller3){
		printf("EL VENDEDOR 2 FUE EL MEJOR****************************************************\n");
		*b2=1;
	}
	if(*seller3>=*seller2&&*seller3>=*seller1){
		printf("EL VENDEDOR 3 FUE EL MEJOR****************************************************\n");
		*b3=1;
	}
}
void totalsales(int *tt_sales,int *topsale){
	for(i=0;i<6;i++){
		*topsale+=tt_sales[i];	
	}
	printf("El TOTAL de ventas del Vendedor %i son:%i\n",vendedor,*topsale);
	vendedor++;
}
void pay(int *bn1,int *bn2,int *bn3){
	float pagobonus=0;
	
	pagobonus=1000*1.1*1.02;
	
	if(*bn1>0){
		printf("Su sueldo base del vendedor 1 es $1000 + bonus de venta del 10%% ($1100) + bonus de empleado del mes de 2%%, en TOTAL: %0.2f\n",pagobonus);		
	}
	else{
		printf("Su sueldo base del vendedor 1 es $1000 y usted no obtuvo ningun bonus\n");
	}
	if(*bn2>0){
		printf("Su sueldo base del vendedor 2 es $1000 + bonus de venta del 10%% ($1100) + bonus de empleado del mes de 2%%, en TOTAL: %0.2f\n",pagobonus);		
	}
	else{
		printf("Su sueldo base del vendedor 2 es $1000 y usted no obtuvo ningun bonus\n");
	}
	if(*bn3>0){
		printf("Su sueldo base del vendedor 3 es $1000 + bonus de venta del 10%% ($1100) + bonus de empleado del mes de 2%%, en TOTAL:%0.2f\n",pagobonus);		
	}
	else{
		printf("Su sueldo base del vendedor 3 es $1000 y usted no obtuvo ningun bonus\n");
	}
}
