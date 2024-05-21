#include <stdio.h>

void main() {
  long pos;
  int i;
  FILE *fp;
  fp = fopen("test.txt", "wt");
  fputs("1234#", fp);
  fclose(fp);

  fp = fopen("test.txt", "rt");
  for (i = 0; i < 4; i++) {
    putchar(fgetc(fp));
    pos = ftell(fp); // 현재 파일 포인터 위치 알려줌.
    fseek(fp, -1, SEEK_END);
    putchar(fgetc(fp));
    fseek(fp, pos, SEEK_SET); // 파일 포인터 위치를 이전 위치로 되돌림.
  }
  fclose(fp);
}
