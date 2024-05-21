#include <stdio.h>
#include <string.h>

void main() {
  char s[] = "1234567890";
  printf("s: %s\n", s);
  memset(s, '*', strlen(s)); // 지정한 문자로 채움.
  printf("s: %s\n", s);
}
