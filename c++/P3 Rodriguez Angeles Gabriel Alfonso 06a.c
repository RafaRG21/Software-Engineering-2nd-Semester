#include <stdio.h>
#include <stdlib.h>

int opcion,opcion2;

	typedef struct reservacion{
		int registro;
		char nombre[10];
		char apellido[10];
		int cantidadPersonas;
		char fecha[10];	
	}reservacion;
	
	int contador=0, i, arreglo, flag=0;
	
int main() {
	int numero;
	reservacion reservar[10];
	
	do{		printf("Digita la opcion deseada \n");
			printf("[1] Registrar \n");
			printf("[2] modificar \n");
			printf("[3] Consulta\n");
			printf("[4] Salir \n");
			scanf("%d",&opcion);
			

		switch(opcion){
			case 1: 
			if (contador<10){
			
			printf("Registro\n");
			scanf ("%d", &reservar[contador].registro);
			
			printf ("Nombre \n");
		
		scanf ("%s",reservar[contador].nombre);
			
			printf ("Apellido \n");
			
			scanf ("%s",reservar[contador].apellido);
			
			printf("Cantidad \n");
			scanf ("%d", &reservar[contador].cantidadPersonas);
			
			printf ("Fecha: \n");
			
			scanf ("%s",reservar[contador].fecha);
			
			contador+= 1;
			
			}else { printf ("Ya no hay espacio \n"); }
			
			break;
			
			case 2:
			printf("Registro: ");
			scanf ("%d", &numero);
			
			for(i=0; i<=contador-1; i++){
				if (numero == reservar[i].registro){
					arreglo = i;
					flag=1;
					do{
				printf ("Editar \n");
				printf ("[1] Nombre \n");
				printf ("[2] Apellidos \n");
				printf ("[3] Cantidad\n");
				printf ("[4] Fecha \n");
				printf ("[5] Salir\n");
				scanf("%d", &opcion2);
				switch(opcion2){

					case 1:
					printf("nombre 1 %s \n", reservar[arreglo].nombre);
					printf ("nombre 2 \n");
					
					scanf ("%s",reservar[arreglo].nombre);	
					break;
					case 2:
					printf("Apellidos 1 %s \n", reservar[arreglo].apellido);
					printf ("Apellidos 2\n");
					scanf ("%s",reservar[arreglo].apellido);
					break;
					case 3:
					printf("Cantidad 1 %i \n", reservar[arreglo].cantidadPersonas);
					printf ("Cantidad \n");
					scanf ("%i", &reservar[arreglo].cantidadPersonas);
					break;
					case 4:
					printf("Fecha1 %s \n", reservar[arreglo].fecha);
					printf ("Fecha: 2 \n");
					scanf ("%s",reservar[arreglo].fecha);
					break;
				}
			}while (opcion2!=5);		
			}
			}
			if(flag==0){printf ("Intete un numero diferente \n");}
				
			break;
			case 3:
				if (contador>0){
				
			    printf ("Datos \n");
				for(i=0; i<=contador-1; i++){
				printf ("registro: %d \n", reservar[i].registro);
				printf ("nombre: %s \n", reservar[i].nombre);
					printf ("fecha: %s \n", reservar[i].fecha);
				printf ("apellido: %s \n", reservar[i].apellido);
				printf ("personas: %d \n", reservar[i].cantidadPersonas);
			
				printf ("************************** \n");
				}
			}else{printf ("No hay  \n");}
			
			break;
		}
		
	}while (opcion!=4);
exit(0);
	return 0;
}
