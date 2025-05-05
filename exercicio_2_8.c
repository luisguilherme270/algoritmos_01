#include <stdio.h>
int main(){
    float capital;
    float taxa;
    int tempo;
    float montante;
    float calculo;

    scanf("%f", &capital);
    scanf("%f", &taxa);
    scanf("%d", &tempo);

    montante = capital;

    calculo = 1 + (taxa / 100);
    for (int i = 0; i < tempo; i++){
        montante *= calculo;
    }
    printf("%.2f", montante);
return 0;
}