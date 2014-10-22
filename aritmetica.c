/*Autor: Lucas Afonso Cazarote
 *Data: 21 de Outubro de 2014
 *
 *Exercício 2.16 do livro: Como programar, 6 edição, Deitel.
 *
 *Escreva um programa que peça ao usuário que digite dois números, obtenha esses números e imprima a soma, o produto, a diferença, o quociente e o módulo (resto da divisão).
 *
 *Programa que recebe dois números e calcula a soma, o produto, a diferença, o quociente e o módulo deles.
 *
 */




#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, soma, produto, quociente, subtracao, modulo;



	printf("Programa que efetua a soma, o produto, a diferenca, o quociente e o módulo de dois numeros inteiros\n\n");

	printf("Digite dois numeros inteiros:\n");
	scanf("%d %d", &num1, &num2);

	soma = num1 + num2;
	
	produto = num1 * num2;

	subtracao = num1 - num2;
	
	quociente = num1 / num2;

	modulo = num1 % num2;

	printf("A soma de %d e %d é = %d\n", num1, num2, soma);
	printf("O produto de %d e %d é = %d\n", num1, num2, produto);
	printf("A diferenca entre %d e %d é = %d\n", num1, num2, subtracao);
	printf("O quociente entre %d e %d é = %d\n", num1, num2, quociente);
	printf("O módulo (resto da divisão) entre %d e %d é = %d", num1, num2, modulo);

	return 0;

}
