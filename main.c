#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

main() {
  int vet[TAM], x, vet2[TAM], y = TAM;
  for(x = 0; x < TAM; x++){
    y = y - 1;
    printf("Digite o %iº número: ", x + 1);
    scanf("%i", &vet[x]);
    vet2[y] = vet[x];
  }
  getchar();
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Vetor inverso: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet2[x]);
    }
    else{
      printf("%i - ", vet2[x]);
    }
  }
  getchar();
}