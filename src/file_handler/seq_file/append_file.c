#include <stdio.h>

void main() {
  FILE *fp;
  fp = fopen("test.txt", "a"); // append
  fputs("111\n", fp);
  fputs("222\n", fp);
  fclose(fp);
}
