#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){
	int num_alunos, num_alunas;
	
	printf("----UNIS------\n");
	printf("Breno Freitas-\n");
	
	printf("\nDigite o numero de alunos: ");
	scanf("%d", &num_alunos); /* Num_alunos recebe numero de alunos */
	
	printf("Digite o numero de alunas: ");
	scanf("%d", &num_alunas); /* Num_alunos recebe numero de alunas */
	
	printf("\nO numero de alunos: %d\n", num_alunos);
	printf("\nO numero de alunas: %d\n", num_alunas);
	getch();
}