/*
codigo que demonstra de maneira muito simples um cardapio, onde possui apenas uma variavel
para ser ser a escolha do pedido, dependendo de qual o usuario digitar dentre as opcoes do propio cardapio
*/
#include <stdio.h>
int main (){
    int escolha;
    
    printf("----------Cardapio-----------\n\n");
    printf("Agua <-- '1'\n");
    printf("Agua com gas <-- '2'\n");
    printf("Coca-cola <-- '3'\n");
    printf("Marmita <-- '4'\n");
    printf("Salada <-- '5'\n\n");
    printf("Escolha uma opcao do cardapio:\n");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("Voce pediu agua\n");
    }if(escolha == 2){
        printf("Voce pediu agua com gas\n");
    }if(escolha == 3){
        printf("Voce pediu Coca-cola\n");
    }if(escolha == 4){
        printf("Voce pediu Marmita\n");
    }if(escolha == 5){
        printf("Voce pediu por salada\n");
    }
return 0;
}