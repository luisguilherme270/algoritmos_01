#include <stdio.h>
int main(){
    int tempo;
    int minutos;
    int horas;
    int segundos;
    int resto;

    scanf("%d", &tempo);

    horas = tempo / 3600;
    resto = tempo % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d",horas,minutos,segundos);
return 0;
}