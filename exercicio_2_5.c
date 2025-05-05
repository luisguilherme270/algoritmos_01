#include <stdio.h>
int main(){
    float lado_a;
    float lado_b;
    float lado_c;

    scanf("%f", &lado_a);
    scanf("%f", &lado_b);
    scanf("%f", &lado_c);

    if ((lado_b + lado_c > lado_a) && (lado_c + lado_a > lado_b) && (lado_a + lado_b > lado_c))
    {
        printf("Pode formar triangulo");
    }else{
        printf("Nao pode formar triangulo");
    }
return 0;
}