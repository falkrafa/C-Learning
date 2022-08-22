#include <stdio.h>

void main(){
  int my_array[10], i;

  for(i=0;i<10;i++){
    my_array[i]= i+1;
    printf("elemento: [%d] de valor %d\n",i, i+1);
  }

}