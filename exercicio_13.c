/*
O codigo possui duas variaveis do tipo int, que armazenam a idade e meses,
o codigo realiza a conversao da idade em anos para em meses atraves de uma multiplicacao por 12
*/
#include <stdio.h>
int main (){
    int idade;
    int meses;
    
    printf("Digite sua idade em anos\n");
    scanf("%d", &idade);
    meses = idade * 12;
    printf("Sua idade em meses e: %d", meses);
return 0;
}