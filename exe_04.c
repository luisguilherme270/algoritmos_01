#include <stdio.h>
int main(){
  int numeros[3];
  int i, j, menor;
  
  printf("Digite os numeros:\n");
  for(i = 0 ; i < 3; i++){
    scanf("%d", &numeros[i]);
  }
  
  menor = numeros[0];
  
  for(j = 0; j < 3; j++){
    if(numeros[j] < menor){
      menor = numeros[j];
    }
  }
  printf("O menor: %d", menor);
return 0;
}
