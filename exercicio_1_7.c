#include <stdio.h>
int main(){
    float comprimento;
    float largura;
    float altura;
    float volume;

    scanf("%f", &comprimento);
    scanf("%f", &largura);
    scanf("%f", &altura);
    
    volume = comprimento * altura * largura;

    printf("%.2f\n", volume);
return 0;
}