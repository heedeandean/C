#include <stdio.h>
#include <string.h>

void main() {
  char str[10];
  FILE *fp;
  fp = fopen("test.txt", "wt");
  fputs("1234567890", fp);
  fclose(fp);

  fp = fopen("test.txt", "rt");
  fseek(fp, 7, SEEK_SET); // 파일 포인터를 임의 위치로 이동시킴. / 파일 시작 위치에서 이동.
  fgets(str, 4, fp);
  printf("7번째부터 3글자 출력 : %s\n", str);

  fseek(fp, -2, SEEK_CUR);
  fgets(str, 3, fp);
  printf("현재 위치에서 앞의 2글자부터 2글자 출력 : %s\n", str);

  fseek(fp, -9, SEEK_END); // 파일의 끝 위치에서 이동.
  fgets(str, 6, fp);
  printf("맨 뒤에서 9번째 앞부터 5글자 출력 : %s\n", str);

  fclose(fp);
}
