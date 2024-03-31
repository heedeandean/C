#include <stdio.h>

void main() {
  static int data[100];
  int i, j, N;
  printf("입력 개수: ");
  scanf("%d", &N);
  for(i=0; i<N; i++)
    scanf("%d", &data[i]);
  for(i=0; i<N-1; i++)
    for(j=i+1; j<N; j++)
      if(data[i] > data[j]) {
        data[i] ^= data[j]; // XOR
        data[j] ^= data[i];
        data[i] ^= data[j];
      }
  printf("정렬된 데이터: \n");
  for(i=0; i<=N-1; i++) {
    printf("%2d", data[i]);
  }
}
