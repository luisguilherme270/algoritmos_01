#include <stdio.h>
int main(){
    float espaco;
    float tempo;
    float vel_media;
    float aceleracao;

    scanf("%f", &espaco);
    scanf("%f", &tempo);

    vel_media = espaco / tempo;

    aceleracao = vel_media / tempo;

    printf("%.2f\n", vel_media);
    printf("%.2f\n", aceleracao);
return 0;
}