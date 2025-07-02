#include <stdio.h>
int main(){
  int numeros[10];
  printf("Digite 10 numeros: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &numeros[i]);
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", numeros[i]);
  }
return 0;
}
