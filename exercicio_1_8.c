#include <stdio.h>
int main(){
    float distancia;
    float litros;
    float cons_medio;

    scanf("%f", &distancia);
    scanf("%f", &litros);

    cons_medio = distancia / litros;

    printf("%.2f km/l\n", cons_medio);
return 0;
}