#include <stdio.h>
int main(){
    float celsius;
    
    scanf("%f", &celsius);
   //Conversao de Celsius pra Kelvin 
    float kelvin = celsius + 273.15;
    float fahrenheit = (celsius * 1.8) + 32;
    //Conversao de Celsius para fahrenheit
    printf("%.1f K\n", kelvin);
    printf("%.1f F", fahrenheit);
   
return 0;   
}