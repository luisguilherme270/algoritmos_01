/*
possui tres variaveis onde duas sao do tipo int e uma do tipo float
o codigo pega o valor digitado pelo usuario e entao os divide para saber o resto da divisao
onde se for igual a zero sera par, e se nao for igual a zero e impar
*/
#include <stdio.h>
int main(){
    int numero_1;
    int numero_2;
    float divisao;

    printf("Digite o primeiro numero:\n");
    scanf("%d",&numero_1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&numero_2);

    divisao = numero_1 % numero_2;
    if(divisao == 0){
        printf("Par");
    }else{
        printf("Impar");
    }
return 0;
}