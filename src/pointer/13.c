#include <stdio.h>

// 사용자 정의 함수
swap(char *x, char *y) {
  char temp;
  while(*x) {
    temp = *x;
    *x = *y;
    *y = temp;
    x++;
    y++;
  }
  return(temp);
}

void main() {
  static char a[] = "SEOUL";
  static char b[] = "KOREA";
  printf("교환 전\n");
  printf("a[] = %s\n", a);
  printf("b[] = %s\n\n", b);
  swap(a, b);
  printf("교환 후\n");
  printf("a[] = %s\n", a);
  printf("b[] = %s\n", b);
}
