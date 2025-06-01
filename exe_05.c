#include <stdio.h>
int main(){
  int numeros[3];
  int i, j, aux;
  
  for(i = 0; i < 3; i++){
    printf("Digite os numeros:");
    scanf("%d", &numeros[i]);
  }
  for(i = 0; i < 3; i++){
    for(j = i+1; j < 3; j++){
      if(numeros[i] > numeros[j]){
        aux = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = aux;
      }
    }
  }
  for(i = 0; i < 3; i++){
    printf("%d ", numeros[i]);
  }
return 0;
}
