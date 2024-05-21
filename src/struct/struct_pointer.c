#include <stdio.h>

struct student {
  char name[10];
  int kor;
  int math;
};

void main() {
  struct student hs[4] = {{"KIM HG", 90, 95}, {"LEE SY", 85, 90},                               {"PARK GS", 70, 85}, {"CHOI HJ", 95, 75}};
    struct student *p; // 구조체 포인터 선언.
  p = hs; // 구조체 포인터 변수에 구조체 시작 주소를 대입. 즉, p = hs[0]
  printf("%s %d %d\n", p->name, p->kor, p->math);
  p += 3;
  printf("%s %d %d\n", p->name, p->kor, p->math);
  p--;
  printf("%s %d %d\n", p->name, p->kor, p->math);
}
