#include <stdio.h>

void main() {
  char ch;
  int in;
  ch = in = 'A';
  printf("\n ch = %d\n", ch);
  printf("\n in = %d\n", in);

  ch = in = 100;
  printf("\n ch = %c\n", ch);
  printf("\n in = %c\n", in);
}
