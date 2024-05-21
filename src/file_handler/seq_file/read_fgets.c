#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
  FILE *fp;
  char name[64];
  fp = fopen("test.txt", "r");

  if (fp == NULL) {
    puts("Error opening file");
    exit(1);
  }

  while ((fgets(name, 20, fp) != NULL))
    printf("%s", name);
  fclose(fp);
}
