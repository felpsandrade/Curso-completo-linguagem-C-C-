#include <stdio.h>
#include <stdlib.h>

void main() {

    //Definindo variaveis
    int a = 6, b = 3;

    //Soma
    printf("A soma de %d e %d = %d", a, b, a + b);

    //Subtração
    printf("\nA subtracao de %d e %d = %d", a, b, a - b);

    //divisao
    printf("\nA divisao de %d e %d = %d", a, b, a / b);

    //multiplicação
    printf("\nA multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da divisão
    printf("\nO resto da divisao de %d e %d = %d", a, b, a % b);

    //Valor absoluto "abs"
    printf("\nO valor de -3 = %d", abs(-3));
    return 0;
}