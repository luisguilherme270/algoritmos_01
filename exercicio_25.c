/*
possui uma variavel do tipo int, que esta em forma de vetor
esse codigo atraves de uma variavel coloca possiveis numeros de um sorteio
*/
#include <stdio.h>
int main(){
    int numeros[6];

    for(int i = 0; i < 6; i ++){
        printf("Digite um numero\n", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Numeros possiveis:\n");
    for(int i = 0; i < 6; i ++){
        printf("%d", numeros[i]);
    }
    printf("\n");
return 0;
}