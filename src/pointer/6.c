#include <stdio.h>

void main() {
  char A[]="heedeandean";
  char *p = A;
  int i;
  int size = sizeof(A); // 배열 원소 수

  // 포인터와 배열의 호환성   
  for(i=0; i<size-1; i++)
    printf("*(A+%d): %c\n", i, *(A+i));
  
  for(i=0; i<size-1; i++)
    printf("p[%d]: %c\n", i, p[i]);
}
