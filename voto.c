#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	printf("Digite a sua idade:");
	scanf("%d", &idade);
	if (idade < 16)
	{
		printf("Nao vota!");
	}
	else if (idade < 18 || idade > 65)
	{
		printf("voto facultativo");
	}
	else
		printf("Voto obrigatorio");
}