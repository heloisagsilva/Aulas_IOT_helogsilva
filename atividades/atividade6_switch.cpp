#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
float salario, salario_novo;
int op;

printf("Heloisa Gonçalves da Silva\n");

printf("1.Imposto,2.Novo Salario, 3.Classificacao\n");
printf("Escolha uma das opcoes acima: ");
scanf("%d", &op);

switch(op){
	case 1:
		printf("Digite o seu salario, para calcular o imposto: ");	 
		  scanf("%f", &salario);

		if(salario<500) {
			salario_novo - salario - salario * 5/100;
			printf("O seu salario com imposto: %.2f", salario_novo);
		}
		  
		else if(salario>=500 && salario>=850){
		  salario_novo - salario - salario * 10/100;
			printf("O seu salario com imposto: %.2f", salario_novo);
		}
		
		else if(salario>850){
	  			  salario_novo - salario - salario * 15/100;
			printf("O seu salario com imposto: %.2f", salario_novo);
		}
	break;
	
	case 2:
	  printf("Digite o seu salario para calcularmos o aumento: ");
	  	scanf("%f", &salario);
	  	
	    if(salario>1500){
	  	  salario_novo = salario + 25;
	  	    printf("Seu novo salario é: %.2f", salario_novo);
		  }
		else if(salario>=750 && salario>=1500){
		  salario_novo = salario + 50;
			printf("Seu novo salario é: %.2f", salario_novo);	
			}
		
		else if(salario>=450 && salario>=749){
		  salario_novo = salario + 75;
			printf("Seu novo salario é: %.2f", salario_novo);	
			}
		
		else if(salario<450){
		  salario_novo = salario + 100;
			printf("Seu novo salario é: %.2f", salario_novo);	
			}
	break;
}

	case 3:
	 printf("Digite o seu salario para fazermos a classificacao: ");
	  	scanf("%f", &salario);
	  	
	if(salario>=700){
	}		printf("Mal remunerado");
	else
	printf("Bem remunerado");
}
	break;

}