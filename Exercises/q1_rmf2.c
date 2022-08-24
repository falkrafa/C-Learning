#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
  float my_matrix[12][8], menor=10;
  char mes[20], dia[20], num[20];

  for(int a = 0; a<12; a++){
    for(int b = 0; b<8; b++){
      scanf("%f", &my_matrix[a][b]);
      if(my_matrix[a][b] < menor){
        menor = my_matrix[a][b];
        switch (a)
        {
        case 0:
          strcpy(mes,"Janeiro");
          break;
        case 1:
          strcpy(mes,"Fevereiro");
          break;
        case 2:
          strcpy(mes,"Março");
          break;
        case 3:
          strcpy(mes,"Abril");
          break;
        case 4:
          strcpy(mes,"Maio");
          break;
        case 5:
          strcpy(mes,"Junho");
          break;
        case 6:
          strcpy(mes,"Julho");
          break;
        case 7:
          strcpy(mes,"Agosto");
          break;
        case 8:
          strcpy(mes,"Setembro");
          break;
        case 9:
          strcpy(mes,"Outubro");
          break;
        case 10:
          strcpy(mes,"Novembro");
          break;
        case 11:
          strcpy(mes,"Dezembro");
          break;
        }
        if(b == 0 || b%2 == 0){
          strcpy(dia, "Sabado");
        }
        else{
          strcpy(dia, "Domingo");
        }
        if(b == 0 || b == 1){
          strcpy(num, "Primeiro");
        }
        if(b == 2 || b == 3){
          strcpy(num, "Segundo");
        }
        if(b == 4 || b == 5){
          strcpy(num, "Terceiro");
        }
        if(b == 6 || b == 7){
          strcpy(num, "Quarto");
        }
      }
    }
  }
  if(menor<0.5){
    printf("O melhor dia e no %s %s de %s", num, dia, mes);
  }
  else{
    printf("Proximo ano eu tento denovo...");
  } 
}
