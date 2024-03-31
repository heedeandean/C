#include <stdio.h>
int score_sum(int gr[], int);

void main() {
  int score[5] = {10, 20, 30, 40, 50};
  int sum;
  sum = score_sum(score, 5); // 배열: 참조에 의한 자료 전달.  
  printf("sum=%d\n", sum);
  printf("score[0]=%d\n", score[0]);
}

int score_sum(int gr[], int size) {
  int sum = 0;
  int i;
  for(i = 0; i < size; i++) 
    sum += gr[i];
  gr[0] = 0;
  return sum;
}
