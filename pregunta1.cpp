# include <stdio.h>

int main(){
	int fila,columna,matriz[6][6],f,c;
	//llenar matriz A
	for(f=0;f<fila;f++) {
		for(c=0;c<columna;c++) {
			
		
		}
		

	}
	for(f=0;f<6;f++) {
		for(c=0;c<6;c++) {
			if(f==c) {
				matriz[f][c]=1;
			
			}else{
				matriz[f][c]=0;
			}
		}
	}
	for(f=0;f<6;f++) {
		
		for(c=0;c<6;c++) {
			
			printf("%d",matriz[f][c]);
			
		}
		
}
	
    

	return 0;	
}

