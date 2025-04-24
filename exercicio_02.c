#include<stdio.h>
#include<stdlib.h>
/*
esse codigo, recebe quatro variaveis para poder calcular a altura informada
pelo usuario esta dentro da media nacional do pais diferenciando entre altura
media feminina e masculina
*/
int main()
{
    float altura;
    char genero;
    float alt_m;
    float alt_f;

    alt_m = 1.73;
    alt_f = 1.60;

    printf("Digite seu gênero entre M ou F\n");
    scanf("%c",&genero);
    if((genero!= 'M') && (genero != 'm') && (genero!= 'F') && (genero!= 'f')) {
        printf("Dados incorretos\n");
        return 1;
    } else {
        printf("Digite sua altura em metros:\n");
        scanf("%f", &altura);
    }if(altura >= 4){
        altura =altura*0.01;
        printf("Caso tenha digitado em centímetros será convertido para metros: %.2f metros\n", altura);
    }
    if((genero== 'M') || (genero=='m')){
        if(altura < 1.73){
            printf("Sua altura está abaixo da média\n");
        }else if(altura > 1.73){
            printf("Sua altura está acima da média\n");
        }if(altura == alt_m){
            printf("Sua altura está dentro da média\n");
        }
    }else if((genero== 'F' || genero== 'f')){
        if(altura > alt_f){
            printf("Sua altura está acima da média\n");
        }else if(altura < alt_f){
            printf("Sua altura está abaixo da média\n");
        }if(altura == alt_f){
            printf("Sua altura está dentro da média\n");
        }
    }
    return 0;
}