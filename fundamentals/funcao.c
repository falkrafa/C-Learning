#include <stdio.h>

void main(){
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(teste(a,b) > c){
    printf("a soma de a e b e maior que c");
  }
  else if(teste(a,b) < c){
    printf("a soma de a e b e menor que c");
  }
  else if(teste(a,b) == c){
    printf("a soma de a e b e igual que c");
  }
}

int teste(int x, int y){
  int soma;

  soma= x+y;
  return soma;
}