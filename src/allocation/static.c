#include <stdio.h>

// 메모리 정적 할당
void test1(int);
void test2(int);
int a = 100; // 전역 변수 - 데이터 영역에 할당, 프로그램이 종료될 때까지 존재.

void main() {
  int b = a; // 지역 변수 - 스택 영역에 할당, 함수가 종료될 때까지 존재.
  test1(b);
  test2(b);
}

void test1(int c) {
  int d;
  d = c + 10;
  printf("test1(): d = %d\n", d);
}

void test2(int e) {
  int f;
  f = e + 20;
  printf("test2(): f = %d\n", f);
}
