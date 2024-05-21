#include <stdio.h>
#include <stdlib.h> // 동적 할당 함수(헤더 파일)
#include <string.h>

void main() {
  char *str[3];
  char temp[100];
  int i, j, size;
  printf("문자열을 3개 입력하시오.\n");
  for (i = 0; i < 3; i++) {
    printf("%d번째 문자열 : ", i + 1);
    gets(temp);
    size = strlen(temp);
    // 입력된 크기만큼 메모리 할당
    str[i] = (char *)malloc((sizeof(char) * size) + 1);
    strcpy(str[i], temp);
  }

  printf("입력된 순서의 반대로 문자열 출력.\n");
  for (i = 2; i >= 0; i--) {
    size = strlen(str[i]);
    temp[size] = '\0';
    for (j = size - 1; j >= 0; j--)
      temp[size - 1 - j] = str[i][j];
    printf("%d: %s\n", i + 1, temp);
  }
  for (i = 0; i < 3; i++)
    free(str[i]);
}
