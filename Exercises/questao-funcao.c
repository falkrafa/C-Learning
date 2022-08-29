#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 15

void calculo(int first_number, int last_number) {
  int digits[MAX_LENGTH];
  int i = 0;

  while (first_number > 0)
  {
    digits[i++] = first_number % 10;
    first_number = first_number / 10;
  }

  for (int j = 0; j < i; j++) {
    if (digits[j] == last_number - 1 || digits[j] == last_number + 1) {
      printf("SIM");
      return;
    }
  }

  printf("NAO");
}

void main() {

  int first_number;
  int last_number;

  scanf("%i %i", &first_number, &last_number);
  calculo(first_number, last_number);
}