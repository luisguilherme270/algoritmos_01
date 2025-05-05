#include <stdio.h>
int main(){
    const float PI = 3.1415;
    float raio;
    float area_circulo;

    scanf("%f", &raio);

    area_circulo = PI * (raio * raio);

    printf("%.2f", area_circulo);
return 0;
}
