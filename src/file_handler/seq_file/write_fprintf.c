#include <stdio.h>
#include <stdlib.h>

void main() {
  FILE *fp;
  char no[10], name[10];
  int mid, term, rep, att, i;
  fp = fopen("test.txt", "w");

  if (fp == NULL) {
    puts("Error opening file");
    exit(1);
  }

  fprintf(stdout, "학번/이름/중간/기말/리포트/출석 점수 입력.\n");
  for (i = 0; i < 1; i++) {
    scanf("%s %s %d %d %d %d", no, name, &mid, &term, &rep, &att);
    fprintf(fp, "%-10s %-8s %3d %3d %3d %3d\n", no, name, mid, term, rep, att);
  }
}
