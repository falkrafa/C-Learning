#include <stdio.h>

void main(){
  int a[3][4]={{10, 20, 25, 30}, {35, 40, 45, 50},{55, 60, 65, 70}};
  int i,j;

  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("[%d]", a[i][j]);    
    }
}
}