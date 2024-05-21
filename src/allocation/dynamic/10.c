#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문자열을 입력받아 단어를 역으로 출력하는 프로그램.
void main() {
  int maxlen, len, i;
  char *str;
  printf("문자열의 최대 길이를 입력하세요: ");
  scanf("%d", &maxlen);
  getchar();
  str = (char *)malloc(sizeof(char) * (maxlen + 1));

  printf("문자열을 입력하세요: ");
  fgets(str, maxlen + 1, stdin);
  len = strlen(str);

  for (i = len; i >= 0; i--) {
    if (str[i] == ' ') {
      printf("%s ", &str[i + 1]);
      str[i] = '\0';
    }
  }
  printf("%s", &str[0]);
  free(str);
}
