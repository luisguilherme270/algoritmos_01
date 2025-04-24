/*
codigo com tres variaveis sendo duas floats e uma do tipo inteiro
o codigo pede para o usuario digitar dois numeros, realizando a divisao de um pelo outro
e depois imprimir o resultado na tela
*/
#include <stdio.h>
int main (){
    float numero1;
    float numero2;
    int divisao;
    
    printf("Digite um numero\n");
    scanf("%f",&numero1);
    printf("Digite um segundo numero\n");
    scanf("%f",&numero2);
    divisao = numero1 / numero2;
    printf("A divisao é: %d", divisao);
return 0;
}