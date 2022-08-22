#include <stdio.h>

void main(){
  float nota1,nota2,nota3,nota4, media;

  printf("Digite a sua primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a sua segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a sua terceira nota: ");
  scanf("%f", &nota3);

  printf("Digite a sua quarta nota: ");
  scanf("%f", &nota4);

  media=(nota1+nota2+nota3+nota4)/4;

  printf("\nA sua media foi: %.2f", media);

  if (media>=7){
    printf("\naprovado por media");
  }

  else{
    printf("\nreprovado");
  }
}