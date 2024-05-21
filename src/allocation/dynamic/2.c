#include <stdio.h>
#include <stdlib.h>

void main() {
  int size;
  char *str;
  printf("문자열의 크기를 입력하세요: ");
  scanf("%d", &size);
  str = (char *)malloc(size + 1); // 동적 할당.
  if (str == NULL) {
    puts("기억공간 할당 실패!");
    exit(1);
  }
  printf("문자열을 입력하세요: ");
  scanf("%s", str);
  printf("입력한 문자열: %s\n", str);
  free(str);
}
