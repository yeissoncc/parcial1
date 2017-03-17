# include <stdio.h>

int main(){
	int matrizA[2][4],matrizB[4][2],matrizC[3][3],f,c,cA,cB,cC;
	//llenar matriz A
	for(f=0;f<2;f++) {
		for(c=0;c<4;c++) {
		
			printf("ingrese matriz A [%d][%d]: ",f,c);
			scanf("%d",&matrizA[f][c]);
			
		
		}
		

	}
		//llenar matriz B
	for(f=0;f<4;f++) {
		for(c=0;c<2;c++) {
			printf("ingrese matriz B [%d][%d] :",f,c);
			scanf("%d",&matrizB[f][c]);
		
		}

	}
	
	//multiplicacion
	 for (f=1;f<=2;f++){
	 	for (c=1;c<=2;c++){
			 matrizC[f][c]=0;
        		 for (cC=1;cC<=2;cC++){
				 matrizC[f][c]=matrizC[f][c]+matrizA[f][cC]*matrizB[cC][c];
          }
       }
    }
    	//imprecion
    for (f=1;f<=2;f++){
	
  	 for (c=1;c<=2;c++){ 
 	  printf("C(%d,%d)= %d \n",f,c,matrizC[f][c]);
   		 }

	}

	return 0;	
}

