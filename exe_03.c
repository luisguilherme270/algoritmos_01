#include <stdio.h>
int main(){
  int numeros[3];
  int i, j, maior;
  
  printf("Digite os numeros:\n");
  for(i = 0 ; i < 3; i++){
    scanf("%d", &numeros[i]);
  }
  for(j = 0; j < 3; j++){
    if(numeros[j] > maior){
      maior = numeros[j];
    }
  }
  printf("O maior: %d", maior);
return 0;
}
