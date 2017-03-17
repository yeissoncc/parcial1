/*
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	int menu;
		printf("engrese en  que unidad lo desa tranformar \n");
	
	printf("1. bytes \n");
	printf("2. kilobytes \n");
	printf("3. megabytes \n");
	printf("4. gigabytes  \n");
	
	printf("ingrese un numero \n");
	scanf("%d",&menu);
	
	switch(menu){
		case 1: printf("transformar en bytes \n");
						int numero,total;
						printf("ingrese la catidad de terabytes: ");
							scanf("%d",&numero);
							total=numero*100000000000;
							printf("el resultado es de : %d ",total);
			break;
		case 2: printf("kilobytes\n");
						printf("ingrese la catidad de terabytes: ");
							scanf("%d",&numero);
							total=numero*1000000000;
							printf("el resultado es de : %d ",total);
				
					
			break;
		case 3: printf("megabytes \n");
						printf("ingrese la catidad de terabytes: ");
							scanf("%d",&numero);
							total=numero*1000000;
							printf("el resultado es de : %d ",total);
					
					
			break;
		case 4: printf("gigabytes \n");
						printf("ingrese la catidad de terabytes: ");
							scanf("%d",&numero);
							total=numero*1000;
							printf("el resultado es de : %d ",total);
				
		
	}
	return 0;
}
