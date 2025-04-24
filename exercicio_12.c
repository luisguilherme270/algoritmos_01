/*
codigo simples para se digitar uma palavra de ate quinze caracteres sem contar os espacos
*/

#include <stdio.h>
int main (){
    char palavra[15];
    
    printf("Digite algo ate 15 letras:\n");
    scanf("%14s", palavra);
return 0;
}