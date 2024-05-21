#include <stdio.h>

// 1.
//struct data {
//  int x;
//  int y;
//};
//typedef struct data DATA; // 이름 바꾸기.

// 2.
typedef struct data {
  int x;
  int y;
} DATA;

void main() {
  //struct data d = {1,2};
  DATA d = {1,2};
  printf("d.x = %d, d.y = %d\n", d.x, d.y);
}
