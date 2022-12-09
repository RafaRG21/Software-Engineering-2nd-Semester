
#include <stdio.h>
#include <stdlib.h>

int opcion,opcion2,d=0;
	int codigo2=0;
			char dato[10];
typedef struct producto {
int codigo;
char des[10], marca[10], modelo[10];

	
}producto;

producto nuevo;

int main(){
	
	
	do{
			printf("Digita la opcion deseada \n");
			printf("[1] Registar producto \n");
			printf("[2] modificar producto \n");
			printf("[3] Consulta de prodcutos \n");
			printf("[4] Salir \n");
			scanf("%d",&opcion);
		switch(opcion){
		case 1:

			
			printf("Digita el codigo del producto \n");
			scanf("%d",&nuevo.codigo);
			
			printf("Digita la descripcion \n");
			scanf("%s",&nuevo.des);
			
			printf("Digita la marca\n");
			scanf("%s",&nuevo.marca);			
			
			printf("Digita el modelo \n");
			scanf("%s",&nuevo.modelo);
			
		

			
			break;
		
			case 2:
					printf("Digita la opcion deseada \n");
			printf("[1] cambiar codigo \n");
			printf("[2] cambiar descripcion \n");
			printf("[3] cambiar marca \n");
			printf("[4] cambiar modelo \n");
			printf("[5] cancelar  \n");
			scanf("%d",&opcion2);
				switch(opcion2){
		case 1:
		printf("Digita el codigo del producto \n");
			scanf("%d",&nuevo.codigo);
			
		
			break;
		
		case 2:
			
			printf("Digita la descripcion \n");
			scanf("%s",&nuevo.des);
			
		
			
			break;
			
			case 3:
		
			printf("Digita la marca\n");
			scanf("%s",&nuevo.marca);			
			
		
			
			break;
			
			case 4:
					
			
			printf("Digita el modelo \n");
			scanf("%s",&nuevo.modelo);
			
			break;	
			case 5:
		
			break;	
		}
			
			break;
	
			case 3:
			printf("%d \n",nuevo.codigo);
			printf("%s \n",nuevo.des);
			printf("%s \n",nuevo.marca);
			printf("%s \n",nuevo.modelo);
			
		
		
			break;
			case 4:
				exit(0);
		
		
			break;
			
		}
			
		}while(d==0);	
	
	
	
	return 0;
}
