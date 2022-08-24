#include <stdio.h>

void main(){
  float altura[4];

  for (int i=0; i<4; i++){
    printf("insert student height:");
    scanf("%f", &altura[i]);
  }

  for(int i=0; i<4; i++){
    printf("altura do aluno %d: %.2f\n", i+1, altura[i]);
  }
  float soma;
  for(int i=0; i<4; i++){
    soma += altura[i];
  }
  printf("media das alturas:%.2f", soma/4.0);



}