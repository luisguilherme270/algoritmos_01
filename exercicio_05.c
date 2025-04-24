/*
o codigo recebe tres variaveis do tipo inteiro, tres float, e um do tipo double
nesse codigo o usuario deve digitar tres valores para calcular a baskara, depois ele
recebe esses numeros e desenvolve a formula do delta , para assim ser possivel encontrar as
raizes, e depois imprime na tela todos os valores digitados e encontrados
*/
#include <stdio.h>
#include <math.h>

int main() {
   int a;
   int b;
   int c;
   float delta;
   double raiz;
   float x1;
   float x2;
   
   printf("Digite o 'a':\n");
   scanf("%d",&a);
   printf("Digite o 'b'\n");
   scanf("%d",&b);
   printf("Digite o 'c'\n");
   scanf("%d",&c);
   
   delta = (b * b) - (4 * a * c);
   raiz = sqrt(delta);
   x1 = (-b + raiz) / (2 * a);
   x2 = (-b - raiz) / (2 * a);
   
   printf("%d\n",a);
   printf("%d\n",b);
   printf("%d\n",c);
   printf("%.2f\n",delta);
   printf("%.2f\n",x1);
   printf("%.2f\n",x2);
return 0;
}