#include <stdio.h>

void main() {
  // 문자형 포인터
  char *cp = "heedeandean";

  int i = 0;
  do
    printf("*(cp+%d) = %c\n", i, *(cp + i));
  while(*(cp + i++) != '\0');
}
