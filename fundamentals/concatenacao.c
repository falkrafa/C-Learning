#include <stdio.h>

void main(){
  char string[50], string2[50], **ret; 
  int result;
  scanf("%s", &string);
  scanf("%s", &string2);

  result = strcmp(string,string2);
  if(result != 0){
    ret = (funcao(string,string2));
    printf("%s", ret);
  }
}

int funcao(char str[50], char str2[50]){
  strcat(str, " ");
  strcat(str,str2);

  return str;
}