#include <stdio.h>
#include <string.h> // 기억공간 관리.

void main() {
  char *s1 = "aaab";
  char *s2 = "aaac";
  int stat;
  stat = memcmp(s1, s2, 3); // 0
  // s1 > s2 : 양수
  // s1 < s2 : 음수
  // s1 = s2 : 0
  printf("%d", stat);
}
