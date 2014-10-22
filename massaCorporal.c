/****************************************************************
 *Autor: Lucas Afonso Cazarote					*
 *Data: 22 de Outubro de 2014					*
 *								*
 *Exercício 2.32 do livro: C como programar, 6 edição, Deitel.  *
 * 								*
 *Calculadora de Índice de Massa Corporal.			*
 ****************************************************************
 */


#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int peso;
	float altura, imc;
	
	printf("Programa que calcula o indice de massa corporal.\n");

	printf("Digite o seu peso (em quilos): \n");
	scanf("%d", &peso);

	printf("Digite a sua altura (em metros): \n");
	scanf("%f", &altura);

	printf("Dados base para a análise do IMC. \t\n");
	printf("Valores do IMC segundo o Ministério da Saúde: \t\n");
	printf("Abaixo do peso: menor que 18,5 \t\n");
	printf("Normal: entre 18,5 e 24,9 \t\n");
	printf("Acima do peso: entre 25 e 29,9 \t\n");
	printf("Obeso: 30 ou mais \t\n");
	
	imc =(peso/(altura*altura));

	printf("Seu índice de massa corporal é de: %f\n", imc);
	
	
/*	if (IMC < 18,5)
	{
	
	}
*/
	
	return 0;
}
