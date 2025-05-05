#include <stdio.h>
int main(){
    float notas[3];
    int pesos[3];
    float calc_1;
    int calc_2;
    float media;

    for (int i = 0; i < 3; i++){
        scanf("%f", &notas[i]);
        scanf("%d", &pesos[i]);
    }
    calc_1 = (notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2]);
    calc_2 = pesos[0] + pesos[1] + pesos[2];

    media = calc_1 / calc_2;

    printf("%.2f", media);
return 0;
}