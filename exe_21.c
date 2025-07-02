#include <stdio.h>
int main(){
  int num_01, num_02, soma;

  printf("Digite dois numeros para somar eles: ");
  scanf("%d", &num_01);
  scanf("%d", &num_02);
  soma = num_01 + num_02;

  printf("A soma dos numeros: %d ", soma);
return 0;
}