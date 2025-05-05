#include <stdio.h>
int main(){
    int anos;
    int meses;
    int dias;

    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);

    anos = anos * 365;
    meses = meses * 30;
    dias = anos + meses + dias;

    printf("%d\n", dias);
return 0;
}