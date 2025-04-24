#include <stdio.h>
/* Esse codigo recebe tres valores dos lados de algum triangulo,
   ele analisa se os valores informados e ou nao um triangulo e tambem classifica ele
   em um dos tres tipos de triangulo , e se ele nao for informa que nao e triangulo
 */
int main() {
    float lado_x;
    float lado_y;
    float lado_z;


    printf("Digite o valor dos tres lados do triangulo:\n");
    scanf("%f", &lado_x);
    scanf("%f", &lado_y);
    scanf("%f", &lado_z);

    if ((lado_x < lado_y + lado_z) &&
        (lado_y < lado_x + lado_z) &&
        (lado_z < lado_x + lado_y)) {
        
        printf("E um triangulo!\n");

        if (lado_x == lado_y && lado_y == lado_z) {
            printf("Triangulo equilatero.\n");
        } else if (lado_x == lado_y || lado_x == lado_z || lado_y == lado_z) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }

    } else {
        printf("Nao e um triangulo.\n");
    }    
return 0;
}
