#include <stdio.h>

void main(){
  int n,i,j, qtd, soma2=0;
  float valor=0;
  printf("Digite a quantidade de itens:");
  scanf("%d", &n);
  float matriz[n][2], soma=0;
  for(i=0;i<n;i++){
    printf("Digite o valor dos itens e a quantidade em gramas:");
    for(j=0;j<2;j++){
      scanf("%f", &matriz[i][j]);
      soma2 += matriz[i][1];
  }
    if(matriz[i][1] >= 100){
      valor += matriz[i][0]*matriz[i][1]/100 ;
  }
} 
printf("\nO valor da compra foi de: %.2f",valor);
printf("\nO valor total em gramas foi de: %d gramas", soma2);
}