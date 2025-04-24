/*
esse codigo possui seis variaveis do tipo inteiro, e uma do tipo float
primeiramente o usuario deve digitar dois numeros, que vao ser somados, logo em seguida
devera digitar outros dois numeros que serao somados tambem, e em seguida sera realizada
uma divisao dos dois resultados de soma um pelo outro
*/
#include <stdio.h>

int main() {
    int num_1;
    int num_2;
    int num_3;
    int num_4;
    int soma;
    int soma2;
    float total;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num_1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num_2);
    soma = num_1 + num_2;
    printf("A soma dos dois numeros digitados e: \n\n%d\n\n", soma);
    
    printf("Digite um terceiro numero:\n");
    scanf("%d", &num_3);
    printf("Digite um quarto numero:\n");
    scanf("%d", &num_4);
    soma2 = num_3 + num_4;
    printf("A soma dos ultimos numeros sao:\n%d\n\n", soma2);
    total=soma/soma2;
    printf("A divisao entre as somas e: %.2f", total);
return 0;
}