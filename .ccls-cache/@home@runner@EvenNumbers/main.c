#include <stdio.h>

void main(void) {
  int num;
  for (num = 1 ; num <= 100 ; num++) {
    if (num % 2 == 0) {
      printf("%d ", num);
  }
}
}