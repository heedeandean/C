#include <stdio.h>

// 공용체: 자료크기가 가장 큰 멤버의 기억공간이 할당되고, 멤버가 공용으로 사용. - 기억공간 절약, 한 번에 1개의 값만 저장됨.
// (구조체와 거의 비슷함.)
union money { // 공용체 정의
int kor;
float us;
};

void main() {
  float er;
  union money m; // 공용체 변수 선언
  printf("교환하고 싶은 원화 금액을 입력하시오: ");
  scanf("%d", &m.kor);
  printf("환율 입력: ");
  scanf("%f", &er);
  printf("입력한 원화는 %d원이고 ", m.kor);
  m.us = m.kor / er;
  printf("교환한 달러는 %8.3f달러입니다.\n", m.us);
}
