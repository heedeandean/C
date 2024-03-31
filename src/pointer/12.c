#include <stdio.h>
#include <string.h>

// 입력된 문자열을 역방향으로 출력.
void main() {
  char buffer[80], *p=buffer;
  int len, i=0;
  printf("Input String: ");
  scanf("%s", p);
  len=strlen(p);
  while(*p)
    p++;

  printf("Inverse String: ");
  while(i<len) {
    p--; // 포인터 위치를 하나씩 감소.
    putchar(*p);
    i++;
  }
}
