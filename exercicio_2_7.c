#include <stdio.h>
int main(){
   int numero;
   
   scanf("%d", & numero);
   
   if(numero % 2 == 0){
       printf("divisivel por 2\n");
   }
   if(numero % 3 == 0){
       printf("divisel por 3\n");
   }
   if(numero % 5 == 0){
       printf("divisel por 5\n");
   }
   if((numero % 2 != 0) && (numero % 3 != 0) && (numero % 5 != 0)){
       printf("nao e divisel por nenhum (2,3 e 5)");
   }
return 0;
}
    