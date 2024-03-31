#include <stdio.h>

void main() {
  int a[] = {1, 2, 3, 4};
  int b[] = {5, 6, 7, 8};
  int *PA[2]; // 포인터 배열: 자료의 크기만큼 기억공간 할당.(+절약) (cf. 배열: 고정적 할당.)
  PA[0] = a; // 배열a[] 시작 주소 
  PA[1] = b;
}
