#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
void main(){
    setlocale(LC_ALL, "Portuguese");

    //1.Ex = Crie um algoritmo que leia 2 notas e mostre a média entre elas.

    float notaA;
    float notaB;

    printf("Digite a primeira nota:");
    scanf("%f", &notaA);

    fflush(stdin);
    printf("\nDigite a segunda nota:");
    scanf("%f", &notaB);

    printf("\nA m�dia das notas A + B �: %.2f", (notaA + notaB) / 2);

    return 0;
}