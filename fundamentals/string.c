#include <stdio.h>
#include <string.h>

void main(){
  char nome[100], sobrenome[100];
  printf("digite nome:");
  gets(nome);
  printf("digite sobrenome:");
  gets(sobrenome); /*parecido com o scanf so que para string*/

  printf("Ola, %s %s\n", nome, sobrenome);
  printf("tamanho da variavel nome: %d\n", strlen(nome)); /*lendo o tamanho da variavel nome*/

  /*concatenando*/
  strcat(nome, " "); /*usando o espaco em branco para criar um espaco entre o nome e sobrenome*/
  strcat(nome, sobrenome);
  printf("seu nome: %s", nome);
}