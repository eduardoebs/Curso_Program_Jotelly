/*
 * tipos_variaveis.c
 * author Eduardobs
*/
#include <stdio.h>

/*
* Função principal
*/
int main (int argc, char **argv){

  int variavel_1;
  int variavel_2 = 10;
  float variavel_3 = 33.3278; // float decimal com 6 digitos de precisão
  double variavel_4 = 45689.972211; //double decimal com 10 digitos de precisao
  //printf("Ola mundo.\n"); // Impressao na tela
/*
  variavel_1 = 12;
  printf("%d\n",variavel_1);

  variavel_1 = 54;
  printf("%d\n",variavel_1);

  variavel_2 = 84;
  printf("%d\n",variavel_2);
  */
  printf("%.4f\n",variavel_3);//truncando a variavel em 4 digitos
  printf("%f\n",variavel_4);//retorna float
  printf("%.5f\n",variavel_4);
  printf("%lf\n",variavel_4);//L retorna long float
  
  printf("O Valor inteiro digitado foi %d\n", variavel_1);
  printf("O Valor float digitado foi %.3f\n",variavel_3);
  printf("O Valor double digitado foi %lf\n\n",variavel_4);
  return 0;
}