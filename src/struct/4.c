#include <stdio.h>
// 구조체 포인터를 함수의 매개변수로 사용: 실행속도 향상, 기억공간 효율 좋아짐(+)
struct num calc(struct num *);
struct num {
  int x;
  int y;
  int sum;
  int mul;
};

void main() {
  struct num number1; 
  number1.x = 10;
  number1.y = 20;
  calc(&number1); // 참조 호출
  printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
}
  
struct num calc(struct num *number2) {
  number2->sum = number2->x + number2->y;
  number2->mul = number2->x * number2->y;
}
