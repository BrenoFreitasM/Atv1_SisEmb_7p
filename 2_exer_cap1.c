#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int x,i;
	printf("----UNIS------\n");
	printf("Breno Freitas-\n");
	printf("--Tabuada--");
	printf("qual tabuada voce deseja ver?");
	scanf("%d", &x);
	for(i=0 ; i<10 ; ++i)
	{
		printf("\n");
		printf("%d",x);
		printf(" x %d",i);
		printf(" = %d",i*x);
	}
	getch();
	return 0;
	
	
}