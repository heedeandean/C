#include <stdio.h>

void main() {
  // 1차원 배열
  int array1[4] = {10, 20, 30, 40};
  int array2[]  = {10, 20, 30, 40};
  int array3[4] = {10, 20}; // 나머지 0으로 초기화
  int array4[4] = {0}; // 모두 0으로 초기화

  int i;
  for(i=0; i<=3; i++) 
    printf("array1[%d] = %d \t", i, array1[i]);
  printf("\n");
  for(i=0; i<=3; i++) 
    printf("array2[%d] = %d \t", i, array2[i]);
  printf("\n");
  for(i=0; i<=3; i++) 
    printf("array3[%d] = %d \t", i, array3[i]);
  printf("\n");
  for(i=0; i<=3; i++) 
    printf("array4[%d] = %d \t", i, array4[i]);
  printf("\n");
}
