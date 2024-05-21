#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
  char name[10];
  FILE *fp;
  fp = fopen("test.dat", "wb"); // 2진 파일

  if (fp == NULL) {
    puts("Error opening file");
    exit(1);
  }

  printf("문자열을 입력하시오. 입력을 끝내려면 'end'를 입력하세요.\n");
  gets(name);

  while (strcmp(name, "end")) {
    fwrite(name, 10, 1, fp); // 저장 변수, 레코드 길이, 레코드 개수, 파일 포인터
    gets(name);
  }
  fclose(fp);
}
