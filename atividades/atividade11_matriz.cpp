#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
int M[2][2], R[2][2];
int i, j, maior;
printf("Heloisa Goncalves da Silva\n\n");

printf("Digite os numeros da matriz 2x2: \n");
for(i= 0; i < 2; i++){	
  for(j= 0; j< 2; j++){
	printf("M[%d][%d]: ",i, j);
	scanf("%d", &M[i][j]);
	}
  }
  
maior = M[0][0];
  
for(i=0; i<2;i++){
	for(j=0; j<2; j++){
	  if( M[i][j] > maior){
		maior= M[i][j];
	 }
   }
 }
 
for(i=0; i < 2; i++){
	for(j = 0; j < 2; j++){
	  R[i][j]= M[i][j] * maior;
  }
}
printf("\n resultados: \n");
for(i = 0; i < 2;i++){
	for(j = 0; j < 2; j++){
      printf("|%d|", R[i][j]);
	}
 	  printf("\n");
  }
  return 0;
}