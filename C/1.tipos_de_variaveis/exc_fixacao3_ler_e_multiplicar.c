#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
void main() {
    setlocale(LC_ALL, "Portuguese");

    /*Crie um algoritmo que leia 3 n�meros inteiros de uma vez s�, e 
    coloque os resultados da multiplica��o entre os 3 em uma variavel propia.
    depois exiba esses valores*/

    int num1, num2, num3;
    int resultado;

    printf("Digite 3 numeros:");
    scanf("%d %d %d", &num1, &num2, &num3);

    resultado = num1 * num2 * num3;
    printf("\nO resultado da Multiplica��o �:%d", resultado);
    
    return;
}