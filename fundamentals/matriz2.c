#include <stdio.h>
#define LIN 2
#define COL 3

void main(){
  int matriz[LIN][COL];

  for (int i=0; i<LIN; i++){
    for(int j=0; j<COL; j++){
      printf("digite o valor do elemento [%d][%d]: ", i+1,j+1);
      scanf("%d",&matriz[i][j]);
    }
  }

  for(int i=0; i<LIN;i++){
  for(int j=0; j<COL;j++){
    printf("valores[%d][%d]: é %d\n", i+1, j+1, matriz[i][j]);
  }   
}

int somalin;

for(int i=0; i<LIN;i++){
  somalin=0;
  for(int j=0;j<COL;j++){
    somalin+=matriz[i][j];
  }
  printf("soma linha %d: %d", i+1, somalin);

}
}