#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	double real, imaginario;
}complexo;

complexo criaComplexo(double valor1, double valor2)
{
	complexo numero;
	numero.real = valor1;
	numero.imaginario = valor2;
	
	return numero;
}


complexo somaComplexos(complexo valor1, complexo valor2)
{
	complexo numero;
	numero.real = valor1.real + valor2.real;
	numero.imaginario = valor1.imaginario + valor2.imaginario;
	
	return numero;
}

int main()
{
	double real1, real2, img1, img2;
	complexo numero1, numero2, soma;
	
	printf("Digite a parte real do numero 1: ");
	scanf("%lf", &real1);
	printf("Digite a parte real do numero 2: ");
	scanf("%lf", &real2);
	printf("Digite a parte imaginaria do numero 1: ");
	scanf("%lf", &img1);
	printf("Digite a parte imaginaria do numero 2: ");
	scanf("%lf", &img2);
	
	numero1 = criaComplexo(real1, img1);
	numero2 = criaComplexo(real2, img2);
	
	soma = somaComplexos(numero1, numero2);
	
	printf("A soma dos numeros e: %lf + %lfi\n", soma.real, soma.imaginario);
	
	system("PAUSE");
	return 0;
}
