#include <stdio.h>

void main() {
  FILE *fp;
  char filename[20];
  puts("삭제 파일 이름?");
  gets(filename);

  if ((remove(filename) == -1))
    printf("%s 파일을 삭제할 수 없습니다.\n", filename);
  else
    printf("%s 파일을 삭제했습니다.\n", filename);

  return;
}
