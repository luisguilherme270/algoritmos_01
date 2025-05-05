#include <stdio.h>
#include <math.h>
int main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);
    if(delta < 0){
        printf("ERRO");
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta))/ (2 * a);

        printf("%.2f\n", x1);
        printf("%.2f\n", x2);
    }
return 0;
}