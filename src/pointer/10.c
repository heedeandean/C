#include <stdio.h>

void main() {
  int A[2][2], B[2][2], C[2][2]; // 2차원 배열 
  int i, j;

  printf("Enter the elements of matrix A:\n");
  for(i=0; i<2; i++)
    for(j=0; j<2; j++)
      scanf("%d", &A[i][j]);
    printf("\n");

  printf("Enter the elements of matrix B:\n");
  for(i=0; i<2; i++)
    for(j=0; j<2; j++)
      scanf("%d", &B[i][j]);
    printf("\n");

  printf("행렬의 합(A+B):\n");
  for(i=0; i<2; i++)
    for(j=0; j<2; j++)
      C[i][j]=A[i][j]+B[i][j];

  for(i=0; i<2; i++) {
    for(j=0; j<2; j++)
      printf("%d ", C[i][j]);
    printf("\n");
  }
}
