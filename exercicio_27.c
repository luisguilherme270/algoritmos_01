/*
o codigo possui uma variavel do tipo float
o codigo pede ao usuario a digitar qualquer numero do real, onde sera final do algoritmo
sera transformado em uma dado do tipo inteiro
*/
#include <stdio.h>
int main(){
    float numero;

    printf("Digite um numero:\n");
    scanf("%f", &numero);
    printf("%d\n", (int)numero);
return 0;
}