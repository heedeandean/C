#include <stdio.h>
#include <stdlib.h>

void main() {
  FILE *fp;
  char no[10], name[10];
  int mid, term, rep, att, i;
  fp = fopen("test.txt", "r");

  if (fp == NULL) {
    puts("Error opening file");
    exit(1);
  }

  printf("학번/이름/중간/기말/리포트/출석\n");
  while (!feof(fp)) { // 파일 끝이면 0이외의 값 리턴.
    fscanf(fp, "%10s %8s %4d %4d %4d %4d\n", no, name, &mid, &term, &rep, &att);
    printf("%-10s %-8s %4d %4d %4d %4d\n", no, name, mid, term, rep, att);
  }
  fclose(fp);
}
