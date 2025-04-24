/*
o codigo apresenta duas variaveis do tipo inteiro, onde pede para o usuario digitar
qualquer numero para poder ser encontrado se ele e par ou impar, atraves de uma divisao por 2
*/
#include <stdio.h>
int main (){
    int numero;
    int divisao;
    
    printf("Digite um numero:\n");
    scanf("%d",&numero);

    divisao = numero % 2;
    
    if(divisao == 0){    
    printf("Ele e par!\n");
    }else{
    printf("Ele e impar!\n");
    }
return 0;
}