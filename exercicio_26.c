/*
O codigo possui tres variaveis do tipo int
o algoritmo pede ao usuario a digitar dois numeros para ser realizado uma soma entre eles
para se saber se a soma dos valores e maior ou igual dez
*/
#include <stdio.h>
int main(){
    int numero_1;
    int numero_2;
    int soma;

    printf("Digite o primeiro numero:\n");
    scanf("%d",&numero_1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&numero_2);

    soma = numero_1 + numero_2;

    printf("A soma é: %d\n", soma);
    if(soma >= 10){
        printf("A soma e maior que 10\n");
    }else{
        printf("A soma e menor que 10\n");
    }
return 0;
}

