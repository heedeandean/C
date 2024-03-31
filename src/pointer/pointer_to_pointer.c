#include <stdio.h>

void main() {
  char a='A', *p, **pp; // 이중 포인터
  p = &a;
  pp = &p;
  printf("**pp = %c\n", **pp);
}
