/*
8- Faça um porgrama em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos(ex: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/
#include <stdio.h>
#include <math.h>

int main() {

  int segundos;
  int horas;
  int minutos;

  printf("Digite os segundos: ");
  int deu_certo = scanf("%i", &segundos);

  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;

  printf("O tempo é %i\n", horas, "horas", minutos, "minutos", segundos, "segundos");
  
  

  return 0;
}