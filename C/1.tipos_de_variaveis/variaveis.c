#include <stdio.h>
#include <stdlib.h>
//para utilizar acentos
#include <locale.h>

void main(){
    
    //Variavel para usar acentos15
    setlocale(LC_ALL,"");
    
    //Imprime minha mensagem na tela
    printf("Hello World!\n");


    //lendo valor inteiro
    int a = 5;
    int b = 6;
    
    printf("valor de a = 5\n");
    printf("valor de b = 6\n");
    
    printf("A soma de a + b = %d\n", a + b);
    scanf("%d", &a);
    printf("O valor de A mudou = %d\n", a);



    //lendo valor quebrado
    float c = 4.2;

    printf("valor de c = %f\n", c);
    scanf("%f", &c);
    printf("O valor de A mudou = %f\n", c);

    //serve para limpar a memoria cache e reutilizar a memoria de 'buffer'
    fflush(stdin);

    //lendo variavel letra unica 'char'
    char letra = 'T';
    printf("valor de d = %c\n", letra);
    scanf("%c", &letra);
    printf("O valor de letra mudou = %c\n", letra);

    return 0;

}
