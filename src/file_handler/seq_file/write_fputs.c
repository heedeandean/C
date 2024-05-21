#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
  char name[64];
  FILE *fp;
  fp = fopen("test.txt", "w");

  if (fp == NULL) {
    puts("Error opening file");
    exit(1); // 비정상적 프로그램 종료. (cf. 0: 정상 종료)
  }

  printf("문자열을 입력하시오. 입력을 끝내려면 'end'를 입력하세요.\n");
  gets(name);

  while (strcmp(name, "end")) { // 문자열 비교
    strcat(name, "\n");
    fputs(name, fp);
    gets(name);
  }

  fclose(fp);
}
