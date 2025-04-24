/*
o codigo recebe tres variaveis do tipo inteiro, onde o usuario deve digitar dois valores
quaisquer, para assim poder se somar os dois e entregar o resultado dessa soma no final
*/
#include <stdio.h>

int main(){
    int numero_1;
    int numero_2;
    int soma;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &numero_1);
    printf("Digite o segundo número:\n");
    scanf("%d", &numero_2);
    soma = numero_1 + numero_2;
    printf("A soma dos dois números digitados é: %d ", soma);
    
return 0;
}