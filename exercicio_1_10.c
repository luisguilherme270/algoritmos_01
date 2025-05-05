#include <stdio.h>
int main(){
    float val_produto;
    float desconto;
    float porcentagem;
    float val_final;

    scanf("%f", &val_produto);
    scanf("%f", &desconto);

    porcentagem = desconto / 100;

    desconto = val_produto * porcentagem;

    val_final = val_produto - desconto;

    printf("%.2f", val_final);

return 0;
}