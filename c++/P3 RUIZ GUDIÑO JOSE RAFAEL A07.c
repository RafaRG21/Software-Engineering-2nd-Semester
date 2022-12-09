#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Act 7 */
int opc,opc2;

	typedef struct futbol{
		int nfolio;
		char date[20];
		char hora[20];
		char descr[30];
		int cost;	
	}partido;
	
	int contador=0, i, array, number, f=0;
	partido boleto[20];
	void registro();
	void edicion();
	void consulta();
	
int main() {
	do{	 system("cls");
		printf("\n***Sistema de boletos***\n");
			printf("1.- Registrar \n");
			printf("2.- Modificar \n");
			printf("3.- Consultar\n");
			printf("4.- Salir \n");
			printf("\nOpcion a elegir:\n");
			scanf("%d",&opc);
			

		switch(opc){
			case 1: 
		    registro();
			
			break;
			
			case 2:
            edicion();
            getch();
			break;
			case 3:
			consulta();
			getch();
			break;
		}
		
	}while (opc!=4);
exit(0);
	return 0;

}
void registro(){
		if (contador<20){
			
			printf("Numero de Folio:\n");
			scanf("%d", &boleto[contador].nfolio);
			
			printf ("Fecha: \n");
		
		scanf ("%s",boleto[contador].date);
			
			printf("Hora: \n");
			
			scanf("%s",boleto[contador].hora);
			fflush(stdin);
			printf("Descripcion del partido:\n");
			gets(boleto[contador].descr);
			printf("Costo: \n");
			scanf("%d",&boleto[contador].cost);
			
			contador+= 1;
			
			}else { printf("Ya no hay espacio \n"); }
}
void edicion(){
	printf("\nNumero de Folio:\n ");
			scanf ("%d", &number);
			
			for(i=0; i<=contador-1; i++){
				if (number == boleto[i].nfolio){
					array = i;
					f=1;
					do{
				printf("----Datos actuales:---- \n");
				printf("1.- Fecha: %s \n",boleto[array].date);
				printf("2.- Hora: %s \n",boleto[array].hora);
				printf("3.- Descripcion del partido: %s \n",boleto[array].descr);
				printf("4.- Costo: %d \n",boleto[array].cost);
				printf("5.- Salir\n");
				printf("\nCampo a editar\n");
				scanf("%d", &opc2);
				switch(opc2){

					case 1:
					fflush(stdin);
					printf("Nueva fecha:\n");
					gets(boleto[array].date);	
					break;
					case 2:
						fflush(stdin);
					printf("Nueva hora:\n");
					gets(boleto[array].hora);
					break;
					case 3:
						fflush(stdin);
					printf("Nueva descripcion:\n");
					gets(boleto[array].descr);
					break;
					case 4:
						fflush(stdin);
					printf("Nuevo costo: \n");
					scanf("%d",&boleto[array].cost);
					break;
				}
			}while (opc2!=5);		
			}
			}
			if(f==0){printf ("Intente un numero diferente \n");}
			
}
void consulta(){
	if (contador>0){
				
			    printf ("Datos: \n");
				for(i=0; i<=contador-1; i++){
				printf ("Numero de Folio: %d \n", boleto[i].nfolio);
				printf ("Fecha: %s \n", boleto[i].date);
				printf ("Hora: %s \n", boleto[i].hora);
				printf ("Descripcion: %s \n", boleto[i].descr);
				printf ("Costo: %d \n", boleto[i].cost);
			
				printf ("-------------------------------- \n");
				
				}
			}else{printf ("No hay Registros  \n");}
}

