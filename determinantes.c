#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//determinante de 2x2
int determinante2(int matriz[2][2])
{
	//declaração de variaveis
	int det;
	det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
	return det;
}

//determinante de 3x3
int determinante3(int matriz[3][3])
{
	//declaração de variaveis
	int det;
	det = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) - ((matriz[0][1] * matriz[1][0] * matriz[2][2]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][2] * matriz[1][1] * matriz[2][0]));
	return det;
}

//função para matriz 2x2
void matriz2()
{
	//declaração de variáveis
	int i, j;	//para o for
	int matriz[2][2], det;	//para a matriz
	
	//obtenção dos termos da matriz
	printf("Digite os valores da matriz:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Valor %d %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}

	//exibir matriz
	printf("Matriz digitada:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Calculo do determinante
	det = determinante2(matriz);
	
	//exibindo o determinante
	printf("O determinante da matriz digitada é: %d\n", det);
}

//função para matriz 3x3
void matriz3()
{
	//declaração de variáveis
	int i, j;	//para o for
	int matriz[3][3], det;	//para a matriz
	
	//obtenção dos termos da matriz
	printf("Digite os valores da matriz:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Valor %d %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}

	//exibir matriz
	printf("Matriz digitada:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//calculo do determinate
	det = determinante3(matriz);
	
	//exibindo o determinante
	printf("O determinante da matriz digitada é: %d\n", det);
}

int main()
{
	//declaração de variaveis
	char opcao;
	
	//alterando padrão do console para português
	setlocale(LC_ALL, "Portuguese");
	
	//manter opções na tela
	while(opcao != 'E')
	{
		//Leitura da opção
		system("CLS");
		printf("O que deseja fazer?\n");
		printf("[2] Determinante de matriz 2x2\n");
		printf("[3] Determinante de matriz 3x3\n");
		printf("[E] Fechar o programa\n");
		opcao = toupper(getch());
		
		//Executando opção escolhida
		switch(opcao)
		{
			case '2':
				printf("Determinante de matriz 2x2\n");
				matriz2();
				break;
			case '3':
				printf("Determinante de matriz 3x3\n");
				matriz3();
				break;
			case 'E':
				printf("Fechando o programa...\n");
				break;
			default:
				printf("Por favor, digite uma opção válida\n\a");
				break;
		}
		system("PAUSE");
	}
	getch();
	return 0;
}
