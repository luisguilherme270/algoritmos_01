/*
o codigo possui quatro variaveis, onde tres sao do tipo char e uma do tipo int
o codigo pede ao usuario para digitar as informacoes para ser possivel se alistar ou nao
onde por meio do if ele determina se pode ou nao se alistar
*/
#include <stdio.h>
int main(){
    int idade;
    char genero;
    char nacio;
    char defic;

    printf("Digite as informações necessarias:\n");
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    printf("Escolha seu gênero entre 'm' ou 'f'\n");
    scanf(" %c",&genero);
    printf("Você é brasileiro?\n");
    scanf(" %c",&nacio);
    printf("Você tem alguma deficiencia?\n");
    scanf(" %c",&defic);

    if((idade >= 18) && (genero == 'm') && (nacio == 's') && (defic == 'n')){
        printf("Pode se alistar!\n");
    }else{
        printf("Não pode se alistar!\n");
    }
return 0;
}