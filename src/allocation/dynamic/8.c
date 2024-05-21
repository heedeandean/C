#include <stdio.h>
#include <stdlib.h>

// 문자열을 입력받아 알파벳순으로 정렬하는 프로그램.
void main() {
  char temp, *str;
  int i, j, k;
  str = (char *)malloc(128);
  for (i = 0; (*str++ = getchar()) != '\n'; i++)
    *str = '\0';
  str -= i + 1;

  // 버블 정렬.
  for (j = 1; j < i; j++)
    for (k = 1; k < i; k++)
      if (*(str + k) > *(str + k - 1)) {
        temp = *(str + k);
        *(str + k) = *(str + k - 1);
        *(str + k - 1) = temp;
      }
  printf("\n%s\n", str);
}
