#include <stdio.h>
#define WON 0
#define DOLLAR 1
#define N 2

union monetary { // 공용체 정의
  int won;       // 공용체 멤버 선언
  float dollar;
};

struct product { // 구조체 정의
  char *name;
  int ptype;
  union monetary price;
};

void main(void) {
  int j;
  struct product item[N]; // 구조체 변수 선언
  item[0].name = "USB";
  item[0].price.won = 30000;
  item[0].ptype = WON;
  item[1].name = "CAMERA";
  item[1].price.dollar = 800.85;
  item[1].ptype = DOLLAR;

  for(j=0; j<N; j++) {
    printf("품명: %-10s", item[j].name);
    if(item[j].ptype)
      printf("가격: $%.2f\n", item[j].price.dollar);
    else
      printf("가격: %d원\n", item[j].price.won);
  }
}
