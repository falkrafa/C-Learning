#include  <stdio.h>
#include  <stdlib.h>
#include <string.h>

void main(){
  int n;
  scanf("%d", &n);
  float matrix[n][n];
  float matrix2[n][n];

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%f", &matrix[i][j]);
    }
  }


  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%f", &matrix2[i][j]);
    }
  }

  char a[3];
  char *op = "+-";
  int resultado;
  float matrix3[n][n];
  scanf("%s", &a);
  resultado = strcmp(a,op);
  if (resultado == 0) {
    for(int k = 0;k<n;k++){
      printf("\n");
      for(int l = 0;l<n;l++){
        if(k%2 == 0){
          matrix3[k][l] = matrix[k][l] + matrix2[k][l];
        }
        else{      
          matrix3[k][l] = matrix[k][l] - matrix2[k][l];
        }
        if (l < n-1){
          printf("%.2f ",matrix3[k][l]);
        }
        else{
          printf("%.2f",matrix3[k][l]);
        }
    } 
  } 
}
else{
  for(int k = 0;k<n;k++){
    printf("\n");
    for(int l = 0;l<n;l++){
      if(k%2 == 0){
        matrix3[k][l] = matrix[k][l] - matrix2[k][l];
      }
      else{      
        matrix3[k][l] = matrix[k][l] + matrix2[k][l];
      }
      if (l < n-1){
        printf("%.2f ",matrix3[k][l]);
      }
      else{
        printf("%.2f",matrix3[k][l]);
      }
    } 
  } 
  } 
}