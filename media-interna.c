#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaração de variáveis
	int i, j;
	float tempo[5], Ao[5], aux;
	
	//obtenção de valores
	printf("Digite os tempos:\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%f", &tempo[i]);
	}
	
	//preservar os valores originais
	for(i = 0; i < 5; i++)
	{
		Ao[i] = tempo[i];
	}
	
	//ordenação
	for(i = 0; i < 5; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if(Ao[i] > Ao[j])
			{
				aux = Ao[i];
				Ao[i] = Ao[j];
				Ao[j] = aux;
			}
		}
	}
	//calculo da media
	aux = (Ao[1] + Ao[2] + Ao[3]) / 3;
	
	//mostrar media
	printf("Media: %.2f\nTempos:", aux);
	for(i = 0; i < 5; i++)
	{
		printf("\t%.2f ", tempo[i]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
