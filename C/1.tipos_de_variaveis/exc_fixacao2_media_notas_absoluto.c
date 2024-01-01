#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 
void main(){
    
    setlocale(LC_ALL, "Portuguese");

    //Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferen�a entre elas

    int notaA;
    int notaB;
    int resultado;

    printf("Digite a primeira nota:");
    scanf("%d", &notaA);

    fflush(stdin);
    printf("\nDigite a segunda nota:");
    scanf("%d", &notaB);

    resultado = (notaA - notaB);
    resultado = abs(resultado);
    printf("\nA m�dia das notas A + B �: %d", resultado);

    //printf("\nA m�dia das notas A + B �: %d", abs(notaA - notaB));
    
    return 0;
}