#include <stdio.h>
int main(){
    float reais;
    float dolar;
    float euro;

    scanf("%f", &reais);

    dolar = reais / 5.66;
    euro = reais / 6.40;

    printf("%.2f\n", dolar);
    printf("%.2f\n", euro);
return 0;
}