#include <stdio.h>
int main(){
  int num_inteiro[2];
  float num_real;
  char caracteres[3];

  printf("Digite tres numeros: ");
  for(int i = 0; i < 2; i++){
    scanf("%d", &num_inteiro);
  }
  printf("Digite um numero real: ");
  scanf("%f", &num_real);

  printf("Digite três caracteres: ");
  for(int i = 0; i < 3; i++){
    scanf(" %c", &caracteres);
  }
  for(int j = 0; j < 2; j++){
    printf("%d", num_inteiro[j]);
  }
  printf("O numero real: ", num_real);
  for(int j = 0; j < 3; j++){
    printf("Os caracteres: %c", caracteres[j]);
  }
return 0;
}