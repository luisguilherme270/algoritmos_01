#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main(){
    float raio;
    char escolha;
    float perimetro, area;
    char comecar = 's';

    while (comecar == 's' || comecar == 'S'){
        printf("Escolha entre  'q' para quadrilatero, 't' para triangulo e 'c' para circunferencia\n");
        scanf(" %c", &escolha);
    if (escolha == 't' ){
        float lados[3];
        for (int i = 0; i < 3; i++){
            printf("Digite os valores dos lados do triangulo: \n");
            scanf("%f", &lados[i]);
        }
        float lado_a = lados[0];
        float lado_b = lados[1];
        float lado_c = lados[2];
        float semiperimetro;
        
        if((lado_a + lado_b > lado_c) && (lado_b + lado_c > lado_a) && (lado_a + lado_c > lado_b)){

        perimetro = lado_a + lado_b + lado_c;

        semiperimetro = perimetro / 2;

        area = sqrt(semiperimetro*(semiperimetro - lado_a) * (semiperimetro - lado_b) * (semiperimetro - lado_c));

        printf("O perimetro do triangulo e: %.2f\n", perimetro);
        printf("A area do triangulo e: %.2f\n", area);
        }else{
            printf("Nao e um triangulo\n");
        }
    } 
    else if(escolha == 'q'){
        float lados[4];
        for (int i = 0; i < 4; i++){
            printf("Digite os valores dos lados:\n");
            scanf("%f",  &lados[i]);
        }
        float lado_a = lados[0];
        float lado_b = lados[1];
        float lado_c = lados[2];
        float lado_d = lados[3];

        perimetro = lado_a + lado_b + lado_c + lado_d;

        if ((lado_a == lado_b) && (lado_b == lado_c) && (lado_c == lado_d)){
            area = lado_a * lado_a;
            printf("Area do quadrado e: %.2f\n", area);
            printf("O perimetro do quadrado e: %.2f\n", perimetro);
        }else if((lado_a == lado_c) && (lado_b == lado_d) && (lado_a != lado_b)){
            area = lado_a * lado_b;
            printf("Area do retangulo e: %.2f\n", area);
            printf("O perimetro do retangulo e: %.2f\n", perimetro);
        }
        else{
            printf("Nao e quadrado ou retangulo\n");
        }
    }
    else if (escolha == 'c'){
        printf("Digite o raio da circunferencia:\n");
        scanf("%f", &raio);
        perimetro = (2 * raio) * PI ;
        area = (raio * raio) * PI;

        printf("O perimetro da circunferencia e: %.2f\n", perimetro);
        printf("A area da circunferencia e: %.2f\n", area);
    }
    else{
        printf("Nao foi escolhido entre 'q', 't', 'c'\n");
    }
        printf("Deseja calcular novamente 'S/N'\n");
        scanf(" %c", &comecar);
        printf("\n");
        }
    printf("Obrigado por usar o sistema\n");
return 0;
}