#include <stdio.h>
#include <stdlib.h>
#define size 26

void main() {
  int i;
  char *alpha, ch;
  alpha = (char *)malloc(size * sizeof(char)); // 메모리 동적 할당
  for (i = 0, ch = 'A'; i < size; i++, ch++)
    *(alpha + i) = ch;
  for (i = 0; i < size; i++)
    printf("%c", *(alpha + i));
  free(alpha);
}
