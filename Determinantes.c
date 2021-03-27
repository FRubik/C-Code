#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//determinante de 2x2
int determinante2(int matriz[2][2])
{
	//declara��o de variaveis
	int det;
	det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
	return det;
}

//determinante de 3x3
int determinante3(int matriz[3][3])
{
	//declara��o de variaveis
	int det;
	det = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) - ((matriz[0][1] * matriz[1][0] * matriz[2][2]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][2] * matriz[1][1] * matriz[2][0]));
	return det;
}

//fun��o para matriz 2x2
void matriz2()
{
	//declara��o de vari�veis
	int i, j;	//para o for
	int matriz[2][2], det;	//para a matriz
	
	//obten��o dos termos da matriz
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
	printf("O determinante da matriz digitada �: %d\n", det);
}

//fun��o para matriz 3x3
void matriz3()
{
	//declara��o de vari�veis
	int i, j;	//para o for
	int matriz[3][3], det;	//para a matriz
	
	//obten��o dos termos da matriz
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
	printf("O determinante da matriz digitada �: %d\n", det);
}

int main()
{
	//declara��o de variaveis
	char opcao;
	
	//alterando padr�o do console para portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	//manter op��es na tela
	while(opcao != 'E')
	{
		//Leitura da op��o
		system("CLS");
		printf("O que deseja fazer?\n");
		printf("[2] Determinante de matriz 2x2\n");
		printf("[3] Determinante de matriz 3x3\n");
		printf("[E] Fechar o programa\n");
		opcao = toupper(getch());
		
		//Executando op��o escolhida
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
				printf("Por favor, digite uma op��o v�lida\n\a");
				break;
		}
		system("PAUSE");
	}
	getch();
	return 0;
}
