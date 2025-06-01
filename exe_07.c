#include <stdio.h>
int main(){
  int numeros[5];
  int i, escolha;
  
  printf("Digite os numeros: ");
  for(i = 0; i < 5; i++){
    scanf("%d", &numeros[i]);
  }
  printf("Digite a posicao do vetor que deseja: ");
  scanf("%d", &escolha);
  if(escolha == 1){
    printf("%d", numeros[0]);
  }
  else if(escolha == 2){
    printf("%d", numeros[1]);
  }
  else if(escolha == 3){
    printf("%d", numeros[2]);
  }
  else if(escolha == 4){
    printf("%d", numeros[3]);
  }
  else if(escolha == 5){
    printf("%d", numeros[4]);
  }
return 0;
}
