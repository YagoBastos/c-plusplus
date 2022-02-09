#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ano, idade;
	printf("Digite sua data de nascimento: ");
	scanf("%d",&ano);
	idade=2022-ano;
	printf("Voce tem %d anos de idade.\n",idade);
	if(idade>=18){
		printf("Maior de idade.");
	}
	else{
		printf("Menor de idade.");
	}
	printf("\n\n");
	system("pause") ;
}


