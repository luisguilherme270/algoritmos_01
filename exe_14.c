#include <stdio.h>
int main(){
  char caracteres[4];
    printf("Digite quatro caracteres: ");
  for(int i = 0; i < 4; i++){
    scanf(" %c", &caracteres[i]);
  }
  for(int i = 0; i < 4; i++){
    printf("%c ", caracteres[i]);
  }
return 0;
}