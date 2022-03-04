#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){	
	
	
	printf("----UNIS------\n");
	printf("Breno Freitas-\n");
	//escrevendo o comando
 	int num1, num2;
 	printf("Voce devera digitar dois numeros diferentes de zero\n\n");
 	printf("\nDigite o primeiro numero: ");
 	printf("%d", &num1);
 	printf("\npDigite o segundo numero: ");
 	printf("%d", &num2);
 	
 	printf("\nA soma %d + %d = %d", num1, num2, num1+num2);
 	printf("\nA subtracao %d - %d = %d", num1, num2, num1-num2);
 	printf("\nO produto %d x %d = %d", num1, num2, num1*num2);
	printf("\nA divisao %d : %d = %d", num1, num2, num1/num2);
	printf("\nA media entre %d e %d = %.2f", num1, num2, (float) (num1+num2)/2);
	getch();
}