#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){	
	
	
	printf("----UNIS------\n");
	printf("Breno Freitas-\n");
	//escrevendo o comando
 	int lado, area, perimetro;
 	printf("Digite o lado do quadrado em cm: ");
 	scanf("%d", &lado);
 	//calculando
 	area=lado*lado;
 	perimetro=lado*4;
 	printf("\nA area do quadrado e: %d", area);
 	printf("\nO perimetro do quadrado e: %d", perimetro);
	getch();
}