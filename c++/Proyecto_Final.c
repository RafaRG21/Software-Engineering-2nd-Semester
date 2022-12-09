/*PROYECTO 1 SEMESTRE*/
//LIBRARIES
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//STRUCTURES
typedef struct ticket{
	char folio[10];
	char mve[50];
	char sala[10];
	char asiento[10];
	char price[10];
}tkt;
typedef struct pelicula{
	char clave[10];
	char name[50];
	char genre[50];
	char tipo[50];
	char drcion[50];
}plc;
//HEADER TICKET
tkt catchaticket();
tkt busquedafolio(tkt x, char search[50]);
tkt busquedamve(tkt x, char search[50]);
tkt busquedasala(tkt x, char search[50]);
tkt busquedaasiento(tkt x, char search[50]);
tkt busquedaprice(tkt x, char search[50]);
tkt eliminacionfolio(tkt x, char search[50]);
tkt eliminacionmve(tkt x, char search[50]);
tkt eliminacionsala(tkt x, char search[50]);
tkt eliminacionasiento(tkt x, char search[50]);
tkt eliminacionprice(tkt x, char search[50]);
void printfticket(tkt x);
//HEADER PELICULA
plc catchapelicula();
plc busquedaclave(plc y, char buscar[50]);
plc busquedaname(plc y, char buscar[50]);
plc busquedagenre(plc y, char buscar[50]);
plc busquedatipo(plc y, char buscar[50]);
plc busquedadrcion(plc y, char buscar[50]);
plc eliminacionclave(plc y, char buscar[50]);
plc eliminacionname(plc y, char buscar[50]);
plc eliminaciongenre(plc y, char buscar[50]);
plc eliminaciontipo(plc y, char buscar[50]);
plc eliminaciondrcion(plc y, char buscar[50]);
void printfpelicula(plc y);
//GLOBAL VARIABLES
int i;
//MAIN
main(){
setlocale(LC_ALL,"");
int menu,smenu,ssmenu,cont2,contador2;
char busqueda[50];
int cont=0,contador=0;
char borrar[50]={0};
	
	tkt t[20]={0};
	plc p[20]={0};
	
	do{
		printf("\n*****Cinema Sistema*****\n");
		printf("1) Tickets\n");
		printf("2) Funciones\n");
		printf("3) Salir\n\n");
		printf("Seleccione que desea realizar: ");
		fflush(stdin);
		scanf("%i",&menu);
		
		switch (menu){
			//Ticket
			case 1:
				do{
					printf("\n*****Tickets*****\n");
					printf("1) Registro\n");
					printf("2) Búsqueda\n");
					printf("3) Eliminación\n");
					printf("4) Consulta de información\n");
					printf("5) Salir\n\n");
					printf("Seleccione que desea realizar: ");
					scanf("%i",&smenu);
					printf("\n");
		
					switch (smenu){
						//Registro Ticket
						case 1:	
							if (cont<20){
							t[cont]=catchaticket();	
					    	cont++;
							}
							else  printf("Ya no hay espacio!!!\a\n");
							break;
						//Busqueda Ticket
						case 2:
							do{													
								printf("*****Busqueda*****\n");
								printf("1) Folio\n");
								printf("2) Nombre\n");
								printf("3) Sala\n");
								printf("4) Asiento\n");
								printf("5) Precio\n");
								printf("6) Salir\n\n");
								
								printf("Seleccione en que categoria desea buscar: ");
								scanf("%i",&ssmenu);
								
								if(ssmenu!=6){								
									printf("Ingrese el dato que desea buscar: ");
									fflush(stdin);
									fgets(busqueda,50,stdin);
									strtok(busqueda,"\n");								
								}
								
								switch(ssmenu){
									case 1:
										for(i=0;i<20;i++){
											t[i]=busquedafolio(t[i],busqueda);
										}
										break;
									case 2:
										for(i=0;i<20;i++){			
											t[i]=busquedamve(t[i],busqueda);
										}
										break;
									case 3:
										for(i=0;i<20;i++){
											t[i]=busquedasala(t[i],busqueda);
										}
										break;
									case 4:
										for(i=0;i<20;i++){							
											t[i]=busquedaasiento(t[i],busqueda);							
										}
										break;
									case 5:
										for(i=0;i<20;i++){							
											t[i]=busquedaprice(t[i],busqueda);
										}
										break;
									case 6:
										printf("Regresando el Submenú...\n");
										break;
									default:
										printf("Porfavor seleccione un número del MENÚ anterior D:<\n\a");		
								}
							}while (ssmenu!=6);						
							break;
						//Eliminacion Ticket
						case 3:	
							do{							
								printf("*****Eliminación*****\n");
								printf("1) Folio\n");
								printf("2) Nombre\n");
								printf("3) Sala\n");
								printf("4) Asiento\n");
								printf("5) Precio\n");
								printf("6) Salir\n\n");
								
								printf("Seleccione en que categoria desea buscar: ");
								scanf("%i",&ssmenu);
								
								if(ssmenu!=6){																
									printf("Ingrese el dato que desea buscar para eliminar: ");
									fflush(stdin);
									fgets(busqueda,50,stdin);
									strtok(busqueda,"\n");
								}
								
								switch(ssmenu){
									case 1:
										for(i=0;i<20;i++){
											t[i]=eliminacionfolio(t[i],busqueda);
										}
										break;
									case 2:
										for(i=0;i<20;i++){			
											t[i]=eliminacionmve(t[i],busqueda);
										}
										break;
									case 3:
										for(i=0;i<20;i++){
											t[i]=eliminacionsala(t[i],busqueda);
										}
										break;
									case 4:
										for(i=0;i<20;i++){							
											t[i]=eliminacionasiento(t[i],busqueda);							
										}
										break;
									case 5:
										for(i=0;i<20;i++){							
											t[i]=eliminacionprice(t[i],busqueda);
										}
										break;
									case 6:
										printf("Regresando el Submenú...\n");
										break;
									default:
										printf("Porfavor seleccione un número del MENÚ anterior D:<\n\a");		
								}
							}while (ssmenu!=6);						
							break;
						//Consulta Ticket
						case 4:
							cont2=0;
							
							for(i=0;i<20;i++){							
								if(strcmp(t[i].folio,"")!=0){
									printfticket(t[i]);
									printf ("--------------------------------\n");
									cont2++;
								}
							}
							
							if(cont2==0){
								printf ("No hay Registros!!!\a\n");
							}		
						 	break;	
						//Salir Ticket
						case 5:
							printf("Regresando el Menú Principal...\n");
							break;	
						default:
							printf("Porfavor seleccione un número del MENÚ anterior D:<\n\a");	
					}
				}while (smenu!=5);
				break;
			//Pelicula
			case 2:
				do{
					printf("\n*****Películas*****\n");
					printf("1) Registro\n");
					printf("2) Búsqueda\n");
					printf("3) Eliminación\n");
					printf("4) Consulta de información\n");
					printf("5) Salir\n\n");
					printf("Seleccione que desea realizar: ");
					scanf("%i",&smenu);
		
					switch (smenu){
						//Registro Pelicula
						case 1:	
					if (contador<20){
							p[contador]=catchapelicula();	
					    	contador++;
							}
							else  printf("Ya no hay espacio \n");
							break;
						//Busqueda Pelicula
						case 2:
							printf("Ingrese el dato con el que desea buscar: ");
							fflush(stdin);
							fgets(busqueda,50,stdin);
							strtok(busqueda,"\n");
							printf("\n");
							for(i=0;i<20;i++){
								p[i]=busquedaclave(p[i], busqueda);
								p[i]=busquedaname(p[i], busqueda);
								p[i]=busquedagenre(p[i], busqueda);
								p[i]=busquedatipo(p[i], busqueda);
								p[i]=busquedadrcion(p[i], busqueda);
							}
							break;
						//Eliminacion Pelicula
						case 3:				
							printf("Ingrese el dato con el que desea buscar para eliminar: ");
							fflush(stdin);
							fgets(busqueda,50,stdin);
							strtok(busqueda,"\n");
							for(i=0;i<20;i++){
								p[i]=eliminacionclave(p[i], busqueda);
								p[i]=eliminacionname(p[i], busqueda);
								p[i]=eliminaciongenre(p[i], busqueda);
								p[i]=eliminaciontipo(p[i], busqueda);
								p[i]=eliminaciondrcion(p[i], busqueda);	
							}
							break;
						//Consulta Pelicula
						case 4:
							contador2=0;
							
							for(i=0;i<20;i++){								
								if(strcmp(p[i].clave,"")!=0){
									printfpelicula(p[i]);
									printf ("-------------------------------- \n");
									contador2++;
								}
							}
							
							if(cont2==0){
								printf ("No hay Registros!!!\a\n");
							}
						 	break;	
						//Salir Pelicula
						case 5:
							printf("Regresando al menú...");
							break;	
						default:
							printf("Porfavor seleccione un número del MENÚ anterior D:<\n\a");	
					}
				}while (smenu!=5);
				break;
			//Salir
			case 3:
				printf("Hasta Luego D:");
				break;	
			default:
				printf("Porfavor seleccione un numero del Menú anterior D:<\n\a");	
		}
	}while (menu!=3);
}
//FUNCION Ticket
tkt catchaticket(){
	tkt x;
	
	printf("Captura numero de Folio: ");
	fflush(stdin);
	fgets(x.folio,10,stdin);
	strtok(x.folio,"\n");
	printf("Captura la película: ");
	fflush(stdin);
	fgets(x.mve,50,stdin);
	strtok(x.mve,"\n");
	printf("Captura la sala: ");
	fflush(stdin);
	fgets(x.sala,10,stdin);
	strtok(x.sala,"\n");
	printf("Captura el asiento: ");
	fflush(stdin);
	fgets(x.asiento,10,stdin);
	strtok(x.asiento,"\n");
	printf("Captura el precio: ");
	fflush(stdin);
	fgets(x.price,10,stdin);
	strtok(x.price,"\n");
	
	return x;
}
tkt busquedafolio(tkt x, char search[50]){
char edit[50];
	
	if(strcmp(x.folio,search)==0){
		printfticket(x);
		
		printf("Inserte la nueva película: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.mve,edit);
		
		printf("Inserte la nueva sala: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.sala,edit);
		
		printf("Inserte el nuevo asiento: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.asiento,edit);
		
		printf("Inserte el nuevo precio: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.price,edit);
		i=20;
		return x;
	}
}
tkt busquedamve(tkt x, char search[50]){
char edit[50];

	if(strcmp(x.mve,search)==0){
		printfticket(x);
		
		printf("Inserte el nuevo folio: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.folio,edit);
		
		printf("Inserte la nueva sala: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.sala,edit);
		
		printf("Inserte el nuevo asiento: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.asiento,edit);
		
		printf("Inserte el nuevo precio: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(x.price,edit);
		i=20;
		return x;	
    }
}
tkt busquedasala(tkt x, char search[50]){
char edit[50];

	if(strcmp(x.sala,search)==0){
	printfticket(x);
	
	printf("Inserte el nuevo folio: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.folio,edit);
	
	printf("Inserte la nueva película: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.mve,edit);
	
	printf("Inserte el nuevo asiento: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.asiento,edit);
	
	printf("Inserte el nuevo precio: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.price,edit);
	i=20;
	return x;	
    }
}
tkt busquedaasiento(tkt x, char search[50]){
char edit[50];

	if(strcmp(x.asiento,search)==0){
	printfticket(x);
	
	printf("Inserte el nuevo folio: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.folio,edit);
	
	printf("Inserte la nueva película: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.mve,edit);
	
	printf("Inserte la nueva sala: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.sala,edit);
	
	printf("Inserte el nuevo precio: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.price,edit);
	i=20;
	return x;	
	}
}
tkt busquedaprice(tkt x, char search[50]){
char edit[50];

	if(strcmp(x.price,search)==0){
	printfticket(x);
	
	printf("Inserte el nuevo folio: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.folio,edit);
	
	printf("Inserte la nueva película: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.mve,edit);
	
	printf("Inserte la nueva sala: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.sala,edit);
	
	printf("Inserte el nuevo asiento: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(x.asiento,edit);
	i=20;
	return x;	
	}
}
tkt eliminacionfolio(tkt x, char search[50]){
	int elim;
	
	if(strcmp(x.folio,search)==0){
		printf("Valor encontrado!!\a\n");
		printfticket(x);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(x.folio,0,strlen(x.folio));
				memset(x.mve,0,strlen(x.mve));
				memset(x.sala,0,strlen(x.sala));
				memset(x.asiento,0,strlen(x.asiento));
				memset(x.price,0,strlen(x.price));
				
				printf("Eliminación completada\n\a");
			}
	i=20;
 	return x;
	}
}
tkt eliminacionmve(tkt x, char search[50]){
	int elim;
	
	if(strcmp(x.mve,search)==0){

		printf("Valor encontrado!!\a\n");
		printfticket(x);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(x.folio,0,strlen(x.folio));
				memset(x.mve,0,strlen(x.mve));
				memset(x.sala,0,strlen(x.sala));
				memset(x.asiento,0,strlen(x.asiento));
				memset(x.price,0,strlen(x.price));
				printf("Eliminación completada\n\a");
			}
	i=20;
	return x;
	}
}
tkt eliminacionsala(tkt x, char search[50]){
	int elim;

	if(strcmp(x.sala,search)==0){
		printf("Valor encontrado!!\a\n");
		printfticket(x);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(x.folio,0,strlen(x.folio));
				memset(x.mve,0,strlen(x.mve));
				memset(x.sala,0,strlen(x.sala));
				memset(x.asiento,0,strlen(x.asiento));
				memset(x.price,0,strlen(x.price));
				printf("Eliminación completada\n\a");
			}
	i=20;
	return x;
	}
}
tkt eliminacionasiento(tkt x, char search[50]){
	int elim;
	
	if(strcmp(x.asiento,search)==0){
		printf("Valor encontrado!!\a\n");
		printfticket(x);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(x.folio,0,strlen(x.folio));
				memset(x.mve,0,strlen(x.mve));
				memset(x.sala,0,strlen(x.sala));
				memset(x.asiento,0,strlen(x.asiento));
				memset(x.price,0,strlen(x.price));
				printf("Eliminación completada\n\a");
			}
	i=20;
	return x;
	}
}
tkt eliminacionprice(tkt x, char search[50]){
	int elim;
	
	if(strcmp(x.price,search)==0){
		printf("Valor encontrado!!\a\n");
		printfticket(x);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(x.folio,0,strlen(x.folio));
				memset(x.mve,0,strlen(x.mve));
				memset(x.sala,0,strlen(x.sala));
				memset(x.asiento,0,strlen(x.asiento));
				memset(x.price,0,strlen(x.price));
				printf("Eliminación completada\n\a");
			}
	i=20;
	return x;
	}
}
void printfticket(tkt x){
	printf("FOLIO: %s \n", x.folio);
	printf("PELÍCULA: %s \n", x.mve);
	printf("SALA: %s \n", x.sala);
	printf("ASIENTO: %s \n", x.asiento);	
	printf("PRECIO: %s \n\n", x.price);
}

//Funcion Pelicula
plc catchapelicula(){
	plc y;
	
	printf("Captura número de Clave: ");
	fflush(stdin);
	fgets(y.clave,10,stdin);
	strtok(y.clave,"\n");
	printf("Captura el nombre: ");
	fflush(stdin);
	fgets(y.name,50,stdin);
	strtok(y.name,"\n");
	printf("Captura el género: ");
	fflush(stdin);
	fgets(y.genre,50,stdin);
	strtok(y.genre,"\n");
	printf("Captura el tipo de función: ");
	fflush(stdin);
	fgets(y.tipo,50,stdin);
	strtok(y.tipo,"\n");
	printf("Captura la duración de la película: ");
	fflush(stdin);
	fgets(y.drcion,50,stdin);
	strtok(y.drcion,"\n");
	
	return y;
}
plc busquedaclave(plc y, char buscar[50]){
char edit[50];
int result;

	result=strcmp(y.clave,buscar);
	if(result==0){
	printfpelicula(y);
	
	printf("Inserte el nuevo nombre: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.name,edit);
	
	printf("Inserte el nuevo género: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.genre,edit);
	
	printf("Inserte el nuevo Tipo de Función: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.tipo,edit);
	
	printf("Inserte la nueva duración: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.drcion,edit);
	i=20;
	return y;
	}
}
plc busquedaname(plc y, char buscar[50]){
char edit[50];
int result;

	result=strcmp(y.name,buscar);
	if(result==0){
		printfpelicula(y);
		
		printf("Inserte la nueva clave: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(y.clave,edit);
		
		printf("Inserte el nuevo género: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(y.genre,edit);
		
		printf("Inserte el nuevo tipo de función: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(y.tipo,edit);
		
		printf("Inserte la nueva duración: ");
		fflush(stdin);
		fgets(edit,50,stdin);
		strtok(edit,"\n");
		strcpy(y.drcion,edit);
		i=20;
		return y;	
    }
}
plc busquedagenre(plc y, char buscar[50]){
char edit[50];
int result;

	result=strcmp(y.genre,buscar);
	if(result==0){
	printfpelicula(y);
	
	printf("Inserte la nueva clave: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.clave,edit);
	
	printf("Inserte el nuevo nombre: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.name,edit);
	
	printf("Inserte el nuevo tipo de función: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.tipo,edit);
	
	printf("Inserte la nueva duración: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.drcion,edit);
	i=20;
	return y;	
    }
}
plc busquedatipo(plc y, char buscar[50]){
char edit[50];
int result;

	result=strcmp(y.tipo,buscar);
	if(result==0){
	printfpelicula(y);
	
	printf("Inserte la nueva clave: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.clave,edit);
	
	printf("Inserte el nuevo nombre: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.name,edit);
	
	printf("Inserte el nuevo género: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.genre,edit);
	
	printf("Inserte la nueva duración: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.drcion,edit);
	i=20;
	return y;	
	}
}
plc busquedadrcion(plc y, char buscar[50]){
char edit[50];
int result;

	result=strcmp(y.drcion,buscar);
	if(result==0){
	printfpelicula(y);
	
	printf("Inserte la nueva clave: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.clave,edit);
	
	printf("Inserte el nuevo nombre: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.name,edit);
	
	printf("Inserte el nuevo género: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.genre,edit);
	
	printf("Inserte el nuevo tipo de función: ");
	fflush(stdin);
	fgets(edit,50,stdin);
	strtok(edit,"\n");
	strcpy(y.tipo,edit);
	i=20;
	return y;	
	}
}
plc eliminacionclave(plc y, char buscar[50]){
	int result;
	int elim;
	
	result=strcmp(y.clave,buscar);
	if(result==0){
		printf("Valor encontrado!!\a\n");
		printfpelicula(y);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(y.clave,0,strlen(y.clave));
				memset(y.name,0,strlen(y.name));
				memset(y.genre,0,strlen(y.genre));
				memset(y.tipo,0,strlen(y.tipo));
				memset(y.drcion,0,strlen(y.drcion));
				
				printf("Eliminación completada\n");
			}
	i=20;
 	return y;
	}
}
plc eliminacionname(plc y, char buscar[50]){
	int result;
	int elim;
	
	if(strcmp(y.name,buscar)==0){

		printf("Valor encontrado!!\a\n");
		printfpelicula(y);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(y.clave,0,strlen(y.clave));
				memset(y.name,0,strlen(y.name));
				memset(y.genre,0,strlen(y.genre));
				memset(y.tipo,0,strlen(y.tipo));
				memset(y.drcion,0,strlen(y.drcion));
				printf("Eliminación completada\n");
			}
	i=20;
	return y;
	}
}
plc eliminaciongenre(plc y, char buscar[50]){
	int result;
	int elim;
	
	result=strcmp(y.genre,buscar);
	if(result==0){
		printf("Valor encontrado!!\a\n");
		printfpelicula(y);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(y.clave,0,strlen(y.clave));
				memset(y.name,0,strlen(y.name));
				memset(y.genre,0,strlen(y.genre));
				memset(y.tipo,0,strlen(y.tipo));
				memset(y.drcion,0,strlen(y.drcion));
				printf("Eliminación completada\n");
			}
	i=20;
	return y;
	}
}
plc eliminaciontipo(plc y, char buscar[50]){
	int result;
	int elim;
	
	result=strcmp(y.tipo,buscar);
	if(result==0){
		printf("Valor encontrado!!\a\n");
		printfpelicula(y);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
			    memset(y.clave,0,strlen(y.clave));
				memset(y.name,0,strlen(y.name));
				memset(y.genre,0,strlen(y.genre));
				memset(y.tipo,0,strlen(y.tipo));
				memset(y.drcion,0,strlen(y.drcion));
				printf("Eliminación completada\n");
			}
	i=20;
	return y;
	}
}
plc eliminaciondrcion(plc y, char buscar[50]){
	int result;
	int elim;
	
	result=strcmp(y.drcion,buscar);
	if(result==0){
		printf("Valor encontrado!!\a\n");
		printfpelicula(y);
		
		printf("Seguro que desea ELIMINAR?\a\n");
		printf("Si(1) No(0)\n");
		scanf("%i",&elim);
			if(elim==1){
				
				memset(y.clave,0,strlen(y.clave));
				memset(y.name,0,strlen(y.name));
				memset(y.genre,0,strlen(y.genre));
				memset(y.tipo,0,strlen(y.tipo));
				memset(y.drcion,0,strlen(y.drcion));
				printf("Eliminación completada\n");
			}
	i=20;
	return y;
	}
}
void printfpelicula(plc y){
	printf("CLAVE: %s \n", y.clave);
	printf("NOMBRE: %s \n", y.name);
	printf("GÉNERO: %s \n", y.genre);
	printf("TIPO DE FUNCIÓN: %s \n", y.tipo);	
	printf("DURACIÓN: %s \n\n", y.drcion);
}
