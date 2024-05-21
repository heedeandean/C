#include <stdio.h>
#include <stdlib.h>

void main() {
  int i;
  int *a;
  a = (int *)calloc(5, sizeof(int)); // 힙 영역에 동적할당. 0으로 초기화.
  for (i = 0; i < 5; i++) {
    printf("%d\n", a[i]);
  }
  free(a);
}
