#include <stdio.h>
#include <string.h>

void main() {
  char src[] = "1234567890";
  char dest[] = "abcdefghijklmnopqrstuvwxyz";
  char *stat;
  printf("dest: %s\n", dest);
  stat = (char *)memcpy(dest, src, strlen(src));
  if (stat)
    printf("dest: %s\n", dest);
  else
    printf("복사 실패\n");
}
