#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int dia, mes;
printf("Heloisa Gonçalves da Silva\n");
printf("Digite o dia que voce nasceu: ");
 scanf("%d", &dia);
printf("Digite o mes que voce nasceu: ");
 scanf("%d", &mes);
 
 switch(mes){
 	case 1:
 	if (dia<=19)
 	printf("capricornio");
 	else
 	printf("aquario");
 	break;
 	
 	case 2:
 	if(dia<=18)
 	printf("aquario");
 	else
 	printf("peixes");
 	break;
 	
 	case 3:
 	if(dia<=20)
 	printf("peixes");
 	else
 	printf("aries");
 		break;
 		
 	case 4:
 	if(dia<=19)
 	printf("aries");
 	else
 	printf("touro");
 		break;
 	
 	case 5:
 	if(dia<=20)
 	printf("touro");
 	else
 	printf("gemeos");
 		break;
 		
 	case 6:
 	if(dia<=20)
 	printf("gemeos");
 	else
 	printf("cancer");
 		break;
 		
 	case 7:
 	if(dia<=22)
 	printf("cancer");
 	else
 	printf("leao");
 		break;
 		
 	case 8:
 	if(dia<=22)
 	printf("leao");
 	else
 	printf("virgem");
 		break;
 		
 	case 9:
 	if(dia<=22)
 	printf("virgem");
 	else
 	printf("libra");
 		break;
 		
 	case 10:
 	if(dia<=22)
 	printf("libra");
 	else
 	printf("escorpiao");
 		break;
 		
 	case 11:
 	if(dia<=21)
 	printf("escorpiao");
 	else
 	printf("sargitario");
 		break;
 		
 	case 12:
 	if(dia<=21)
 	printf("sargitario");
 	else
 	printf("capricornio");
 		break;
 	default:
 		printf("MES INVALIDO\n");
 }
}