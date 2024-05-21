#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
  char *str;
  str = (char *)malloc(sizeof(char) * 10);
  strcpy(str, "123456789");
  printf("str=%s\n", str);
  str = (char *)realloc(str, 50); // 할당된 기억공간 변경. (10 => 50byte)
  strcat(str, "abcdefghijklmnopqrstuvwxyz");
  printf("str=%s\n", str);
  free(str);
}
