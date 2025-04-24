/*
o codigo possui quatro variaveis, onde em ordem a primeira e um array para 31 caracteres(onde o usuario deve digitar sem colocar espaco)
a segunda e para a idade(do tipo inteiro), a terceira para escolher o genero(do tipo char), e a quarta para a altura sendo do tipo float
codigo feito para receber as informaçoes que o usuario digitar,
nome, idade, genero, altura
*/
#include <stdio.h>

int main() {
    char nome[31];
    int idade;
    char genero;
    float altura;
    
    printf("Digite seu nome:\n");
    scanf("%30s", &nome);
    printf("Agora Digite sua idade em anos:\n");
    scanf("%d", &idade);
    printf("Digite seu genero entre 'M' ou 'F'\n");
    scanf(" %c", &genero);
    printf("Digite tambem sua altura:\n");
    scanf("%f", &altura);
    
    printf("Todos os dados inseridos:\n\n");
    printf("%c\n", genero);
    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%.2f\n", altura);
return 0;
}