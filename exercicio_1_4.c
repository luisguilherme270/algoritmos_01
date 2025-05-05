#include <stdio.h>
int main(){
    int numero_1;
    int numero_2;

    scanf("%d",&numero_1);
    scanf("%d",&numero_2);
    
    numero_1 = numero_1 ^ numero_2;
    numero_2 = numero_1 ^ numero_2;

    printf("%d\n", numero_1);
    printf("%d\n", numero_2);
return 0;
}