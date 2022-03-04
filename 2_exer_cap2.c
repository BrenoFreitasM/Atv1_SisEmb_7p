#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){	
	
	int num;
	printf("----UNIS------\n");
	printf("Breno Freitas-\n");
	//escrevendo o comando
 	int marcaA, marcaB, marcaC;
 	printf("Digite a quantidade de chuteiras da marca  A");
 	printf("%d", &marcaA);
 	printf("Digite a quantidade de chuteiras da marca  B");
 	printf("%d", &marcaB);
	printf("Digite a quantidade de chuteiras da marca  C");
 	printf("%d", &marcaC);
 	//apresentando resultado
 	printf("\nExistem %d chuteiras da marca A\n", marcaA);
 	printf("Existem %d chuteiras da marca B\n", marcaB);
	printf("Existem %d chuteiras da marca C\n", marcaC);
	
	printf("Existem %d chuteiras da maraca A, %d da marca B, %d da marcaC\n\n", marcaA,marcaB,marcaC);
	
	printf("\t\t Quantidade de chuteiras em Estoque\n");
	printf("\t\tMarca A \t Marca B \t Marca C\n");
	printf("\t\t %d \t %d \t %d\n\n", marcaA,marcaB,marcaC);
	getch();
}	