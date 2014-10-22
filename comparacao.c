/*Autor: Lucas Afonso Cazarote
 *Data: 21 de Outubro de 2014
 *
 *Exercício 2.18 do livro: Como programar em C, 6 edição, Deitel.
 *
 *Escreva um programa que peça ao usuário que digite dois inteiros, obtenha os números e depois imprima o maior número seguido das palavras "é maior".
 *Se os números forem iguais, imprima a mensagem "Esses números são iguais". Use apenas a forma de seleção única da instrução "if" aprendido nesse capítulo.
 *
 *Programa que compara dois numeros inteiros e analisa se eles são iguais ou um é maior que o outro.
 *
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("Programa que compara dois numeros e analisa qual é o maior e se são iguais. \n\n");
	printf("Digite os dois numeros inteiros para a comparacao: \n");
	scanf("%d %d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d e %d são iguais\n", num1, num2);
	}

	if (num1 > num2)
	{
		printf("%d é maior\n", num1);
	}
	
	if (num1 < num2)
	{
		printf("%d é maior\n", num2);
	}

	return 0;

}
