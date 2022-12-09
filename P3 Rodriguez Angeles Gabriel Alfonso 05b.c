
#include <stdio.h>
#include <stdlib.h>

int opcion,opcion2,d=0;
	int codigo2=0;
			char dato[10];





			
typedef struct empleado {
int numero, sueldo,dias,descuentos,total;
char nombre[10], 
apellidos[10];
	
}empleado;
empleado nuevo;
int main(){
	do{
			printf("Digita la opcion deseada \n");
			printf("[1] Registar empleado \n");
			printf("[2] modificar empleado \n");
			printf("[3] Consulta de empleado \n");
			printf("[4] Salir \n");
			scanf("%d",&opcion);
		switch(opcion){
		case 1:			
			printf("Digita el numero de empleado \n");
			scanf("%d",&nuevo.numero);
			printf("Digita los nombres \n");
			scanf("%s",&nuevo.nombre);
			printf("Digita los apellidos\n");
			scanf("%s",&nuevo.apellidos);			
			printf("Digita el sueldo \n");
			scanf("%d",&nuevo.sueldo);
			printf("Digita el sueldo total \n");
			scanf("%d",&nuevo.total);		
			printf("Digita los descuentos \n");
			scanf("%d",&nuevo.descuentos);		
			break;
			case 2:
			printf("Digita la opcion deseada \n");
			printf("[1] cambiar numero de empleado \n");
			printf("[2] cambiar el nombre del empleado \n");
			printf("[3] cambiar el apellido del empleado \n");
			printf("[4] cambiar el sueldo \n");
			printf("[5] cambie el dueldo totoal  \n");
			printf("[6] cambie los descuentos  \n");
				printf("[7] salir  \n");
			scanf("%d",&opcion2);
				switch(opcion2){
		case 1:
	
			
			printf("Digita el numero de empleado \n");
			scanf("%d",&nuevo.numero);
	
			break;
		
		case 2:

		
			printf("Digita los nombres \n");
			scanf("%s",&nuevo.nombre);
	
			break;
			
			case 3:
		
	
			printf("Digita los apellidos\n");
			scanf("%s",&nuevo.apellidos);			

		
			
			break;
			
			case 4:
			
			printf("Digita el sueldo \n");
			scanf("%d",&nuevo.sueldo);
			
			break;	
		
			printf("Digita el sueldo total \n");
			scanf("%d",&nuevo.total);		
	
			break;
				case 6:
		
			printf("Digita los descuentos \n");
			scanf("%d",&nuevo.descuentos);	
			break;	
				case 7:
		
			break;		
		}
			
			break;
	
			case 3:
	
			printf("%d\n",nuevo.numero);
			printf("%s\n",nuevo.nombre);
			printf("%s\n",nuevo.apellidos);			
			printf("%d\n",nuevo.sueldo);
			printf("%d\n",nuevo.total);		
			printf("%d\n",nuevo.descuentos);	
			
		
		
		
			break;
			case 4:
				exit(0);
		
		
			break;
			
		}
			
		}while(d==0);	
	
	
	
	return 0;
}
