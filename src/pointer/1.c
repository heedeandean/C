#include <stdio.h>

void main() {
  int a = 100;
  char b = 'b';
  void *p = NULL;
  p = (int*)&a; // 명시적 형변환 
  printf("*p = %d\n", *(int*)p);
  
  p = (char*)&b; // 명시적 형변환 
  printf("*p = %c\n", *(char*)p);
}
