#include <stdio.h>
#include <stdlib.h>

void main() {
  char *str[2];
  int i;

  for (i = 0; i < 2; i++) {
    if ((str[i] = (char *)malloc(128)) == NULL) {
      printf("동적 메모리 할당 실패!\n");
      exit(0);
    }
    printf("동적 메모리 할당 성공! 문자열[%d]을 입력하시오.\n", i + 1);
    gets(str[i]);
  }
  for (i = 0; i < 2; i++)
    free(str[i]); // 동적 메모리 해제.
}
