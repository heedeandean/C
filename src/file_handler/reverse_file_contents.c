#include <stdio.h>

// 파일 내용을 역으로 출력하는 프로그램.
#define MAXFILENAME 50
void main() {
  char fname[MAXFILENAME];
  int c;
  FILE *fp = NULL;
  fprintf(stdout, "Enter file name: ");
  scanf("%s", fname);
  fp = fopen(fname, "r");
  fseek(fp, 0, SEEK_END);
  if (ftell(fp) == 0)
    return;
  fseek(fp, -1, SEEK_CUR);
  while (1) {
    c = getc(fp);
    putchar(c);
    if (ftell(fp) == 1)
      break;
    fseek(fp, -2, SEEK_CUR);
  }
  fclose(fp);
}
