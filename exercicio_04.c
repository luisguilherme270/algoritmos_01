/*
Esse codigo recebe duas variaveis do tipo inteiros, pedindo para o usuario digitar duas datas
depois analisando se as data_01 e maior que a data_02, caso seja maior ocorre um erro
caso seja menor o codigo continua para calcular os anos bisextos, onde a data e dividida por 4 ou 400 se apresentar resto nao
e bisexto
*/
#include <stdio.h>
int main(){
    int data_01;
    int data_02;

    printf("Digite o ano desejado:\n");
    scanf("%d", &data_01);
    printf("Digite o ano desejado:\n");
    scanf("%d", &data_02);
    if(data_01 > data_02){
        printf("Incorreto:\n");
    }else{
        printf("Vamos calcular os anos bisextos\n");
        while(data_01 < data_02){
            if((data_01 % 4 == 0 && data_01 % 100 != 0) || (data_01 % 400 == 0)){
                printf("%d\n" ,data_01);
            }data_01 ++;
        }
    }
return 0;
}