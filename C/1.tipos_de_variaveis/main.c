#include <stdio.h>
#include <stdlib.h>
//para utilizar acentos
#include <locale.h>

void main(){
    
    //Variavel para usar acentos15
    setlocale(LC_ALL,"");
    
    //Imprime minha mensagem na tela
    printf("Hello World!\n");

    return 0;
}
