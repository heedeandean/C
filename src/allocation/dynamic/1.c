#include <stdio.h>
#include <stdlib.h> // 메모리 동적 할당 함수

void main() {
  int *a;
  a = (int *)malloc(sizeof(int)); // 기억공간 할당.
  if (a == NULL) {                // 기억공간 할당 성공 여부.
    puts("기억공간 할당 실패.");
    exit(1);
  }
  *a = 20;
  printf("힙에 저장된 변수 a: %d\n", *a);
  free(a); // 기억공간 해제
}
