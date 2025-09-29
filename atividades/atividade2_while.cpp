#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
float nota1,nota2, media, somatoria;
int alunos= 1; //guarda o numero inicial de alunos
printf("Heloisa Gonçalves da Silva\n\n");

while(alunos < 7){ //a condição vai se repetir ate que seja falsa,ou seja,quando o numero de alunos for igual a 6 (ou seja menor que 7)
  printf("Insira a %d° nota do aluno: ", alunos); //o %d vai puxar o numeros de alunos, começando pelo 1 
	scanf("%f", &nota1);

  printf("Insira a %d° nota do aluno: ", alunos);
  	scanf("%f", &nota2);

alunos++; //ira adicionar mais um aluno no laço

media = nota2 + nota2 / 2;

if(media<=3){
	  printf("ALUNO REPROVADO!! MEDIA %.2f\n\n", media);
	}else if(media < 7){
	  printf("ALUNO NA MEDIA!! MEDIA %.2f\n\n", media);
	}else{
	  printf("ALUNO APROVADO!! MEDIA %.2f\n\n",media);
	}
    somatoria += media / 6;
}
	printf("\n\nMedia geral: %.2f", somatoria);
}