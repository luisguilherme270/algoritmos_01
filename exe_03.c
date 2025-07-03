#include <stdio.h>
int estrutura(int escolha)
{
  switch(escolha)
  {
  case 1:
    {
    float pnt_x;
    float pnt_y;
    
    pnt_x = 2.00;
    pnt_y = -2.00;
    
    printf("%.2f\n", pnt_x);
    printf("%.2f\n", pnt_y);
    break;
    }
  case 2:
    {
    int numero_a;
    int numero_b;
    int numero_c;
    numero_a = 3;
    numero_b = 10;
    numero_c = 200;
    
    printf("%d %d %d\n", numero_a, numero_b, numero_c);
    break;
    }
  case 3:
    {
    int idade, meses, dias;
    idade = 19;
    meses = 19 * 12;
    dias = 19 * 365;
    printf("%d %d %d", idade, meses, dias);
    break;
    }
  case 4:
    {
    int idade_dias;
    idade_dias = 19 * 365;
    printf("%d", idade_dias);
    break;
    }
  case 5:
    {
    int nota_01, nota_02, nota_03;
    nota_01 = 8;
    nota_02 = 5;
    nota_03 = 7;
    printf("%d %d %d", nota_01, nota_02, nota_03);
    break;
    }
  case 6:
    {
    float numero_01, numero_02, numero_03;
    numero_01 = 1.5;
    numero_02 = 3.0;
    numero_03 = 8.5;
    printf("%.2f %.2f %.2f", numero_01, numero_02, numero_03);
    break;
    }
  case 7:
    {
    int numero_01, numero_02;
    numero_01 = 10;
    numero_02 = 5;
    printf("%d %d", numero_01, numero_02);
    break;
    }
  case 8:
    {
    int ra, notas[3];
    int i;
    printf("Digite seu RA:");
    scanf("%d", &ra);
    printf("Digite as notas:\n");
    for(i = 0; i < 3; i++)
      {
      scanf("%d", &notas[i]);
      }
    printf("%d\n", ra);
    for(i = 0; i < 3; i++)
      {
      printf("%d\n", notas[i]);
      }
    break;
    }
  case 9:
    {
    int altura;
    char genero;
    
    printf("Digite a altura ");
    scanf("%d", &altura);
    printf("Digite o caracter do genero entre M/F ");
    scanf(" %c", &genero);
    
    if(altura >= 100)
      {
      altura = altura / 100;
      }
    if((genero != 'm') && (genero != 'f'))
      {
      printf("Invalido ");
      return 1;
      }
    printf("Altura em metros: %d \n", altura);
    printf("Genero: %c", genero);
    break;
    }
  case 10:
    {
    float inicio, fim;
    
    printf("Digite a hora de inicio do jogo: ");
    scanf("%f", &inicio);
    printf("Digite a hora do fim do jogo: ");
    scanf("%f", &fim);
    
    printf("inicio: %.2f\n", inicio);
    printf("fim: %.2f", fim);
    break;
    }
  case 11:
    {
    int numeros[4], i;
    
    printf("Digite quatro numeros para o conjunto ");
    for(i = 0; i < 4; i++)
      {
      scanf("%d", &numeros[i]);
      }
    printf("Os numeros do conjunto sao: \n");
    for(i = 0; i < 4; i++)
      {
      printf("%d ", numeros[i]);
      }
    break;
    }
  case 12:
    {
    float numero_real;
    
    printf("Digite um numero real: ");
    scanf("%f", &numero_real);

    printf("O numero digitado: %.2f", numero_real);
    break;
    }
  case 13:
    {
    int numeros[10];
    printf("Digite dez numeros: \n");
    for(int i = 0; i < 10; i++)
      {
      scanf("%d", &numeros[i]);
      }
    for(int i = 0; i < 10; i++)
      {
      printf("%d ", numeros[i]);
      }
    break;
    }
  case 14:
    {
    char caracteres[4];
    printf("Digite quatro caracteres: ");
    for(int i = 0; i < 4; i++)
      {
      scanf(" %c", &caracteres[i]);
      }
    for(int i = 0; i < 4; i++)
      {
      printf("%c ", caracteres[i]);
      }
    break;
    }
  case 15:
    {
    int num_inteiro[2];
    float num_real;
    char caracteres[3];
    
    printf("Digite tres numeros: ");
    for(int i = 0; i < 2; i++)
      {
      scanf("%d", &num_inteiro[i]);
      }
    printf("Digite um numero real: ");
    scanf("%f", &num_real);
    
    printf("Digite três caracteres: ");
    for(int i = 0; i < 3; i++)
      {
      scanf(" %c", &caracteres[i]);
      }
    for(int j = 0; j < 2; j++)
      {
      printf("%d", num_inteiro[j]);
      }
    printf("O numero real: %.2f\n", num_real);
    for(int j = 0; j < 3; j++)
      {
      printf("Os caracteres: %c", caracteres[j]);
      }
    break;
    }
  case 16:
    {
    float num_01, num_02, num_03;
    printf("Digite tres numeros reais: ");
    scanf("%f", &num_01);
    scanf("%f", &num_02);
    scanf("%f", &num_03);
    printf("%.2f %.2f %.2f", num_01, num_02, num_03);
    break;
    }
  case 17:
    {
    int numeros[3], i;
    printf("Digite tres numeros: ");
    for(i = 0; i < 3; i++)
      {
      scanf("%d", &numeros[i]);
      }
    for(i = 0; i < 3; i++)
      {
      printf("%d ", numeros[i]);
      }
    break;
    }
  case 18:
    {
    int dias, anos;
    printf("Digite o numero de dias: ");
    scanf("%d", &dias);
    printf("Digite os anos: ");
    scanf("%d", &anos);
    
    printf("%d %d", dias, anos);
    break;
    }
  case 19:
    {
    int numeros_int[2], i;
    float numreal_01, numreal_02;
    printf("Digite dois numeros inteiros: ");
    for(i = 0; i < 2; i++)
      {
      scanf("%d", &numeros_int[i]);
      }
    printf("Digite dois numeros reais: ");
    scanf("%f", &numreal_01);
    scanf("%f", &numreal_02);

    for(i = 0; i < 2; i++)
      {
      printf("\n%d", numeros_int[i]);
      }
    printf("\n%.2f", numreal_01);
    printf("\n%.2f", numreal_02);
    break;
    }
  case 20:
    {
    float temperatura;
    
    temperatura = 26.1;
    
    printf("%.2f °C ", temperatura);
    break;
    }
  case 21:
    {
    int num_01, num_02, soma;
    
    printf("Digite dois numeros para somar eles: ");
    scanf("%d", &num_01);
    scanf("%d", &num_02);
    soma = num_01 + num_02;
    
    printf("A soma dos numeros: %d ", soma);
    break;
    }
  }
  return(escolha);
}
int
main()
{
  int escolha = 0;
  printf("Alex escolha um dos exercicios de 1 a 21:\n");
  do
  {
  scanf("%d", &escolha);
  }
  while((escolha < 1) || (escolha > 21));
  escolha = estrutura(escolha);
return 0;
}