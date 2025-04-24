/*
o codigo tem tres variaveis do tipo int
o codigo pega um certo numero digitado pelo usuario que sera a sequencia total que ele deseja
entao atravez de um for , sera adicionado valor ao contador a partir do primeiro valor ja declaradas pelas variaveis numero_1 e numero_2
depois ela vai somar os dois numeros, e ir substituindo eles conforme o laco se repete ate ao numero digitado da sequencia do usuario
*/
#include <stdio.h>
int main(){
    int sequencia;
    int contador;
    int soma;

    int numero_1;
    int numero_2;

    numero_1 = 0;
    numero_2 = 1;

    printf("Digite a quantidade da sequencia:\n");
    scanf("%d", &sequencia);
    for(contador = 0; contador < sequencia; contador++){
        soma = numero_1 + numero_2;
        printf("%d", numero_1);
        numero_1 = numero_2;
        numero_2 = soma;
        printf("\n");
    }
return 0;
}