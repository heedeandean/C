#include <stdio.h>
#include <stdlib.h>

void main() {
  char name[10];
  FILE *fp;
  fp = fopen("test.dat", "rb"); // 2진 파일

  if (fp == NULL) {
    puts("Error opening file");
    exit(1);
  }

  while (1) {
    if (fread(name, 10, 1, fp) != 1) // 성공시 레코드 개수 리턴.
      break;
    puts(name);
  }
  fclose(fp);
}
