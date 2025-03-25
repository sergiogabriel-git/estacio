#include <stdio.h>
int main() {
  //Variaveis
  int movimento_torre = 1;
  int movimento_bispo = 1;
  int movimento_rainha;

  //Movimento peça torre 5 casas para direita
  printf("TORRE\n");
  while(movimento_torre <= 5) {
    printf("Direita\n");
    movimento_torre++;
  }

  //Movimento peça bispo 5 casas para cima à direita
  printf("BISPO\n");
  do {
    printf("Cima\n");
    printf("Direita\n");
    movimento_bispo++;
    } while(movimento_bispo <= 5);

  //Movimento peça rainha 8 casas para direita
  printf("RAINHA\n");
  for(movimento_rainha = 1; movimento_rainha <= 8; movimento_rainha++) {
    printf("Direita\n");
  }

  return 0;
}
