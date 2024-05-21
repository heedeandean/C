#include <stdio.h>
#include <string.h>

// 구조체(structure): 여러 자료형의 모임을 하나로 정의.(사용자 정의 자료형). 집단, 집합. 프로그램 간결. 

struct person { // 구조체 선언
char name[8];
int age;
char sex;
};

void main() {
  struct person X = {"홍길동", 30, 'M'}; // 구조체 변수 선언 및 초기화
  struct person Y;
  strcpy(Y.name, "임꺽정");
  Y.age = 35;
  Y.sex = 'M';
  printf("X의 정보: %s, %d, %c\n", X.name, X.age, X.sex);
  printf("Y의 정보: %s, %d, %c\n", Y.name, Y.age, Y.sex);
  printf("sizeof(person.name): %dbyte\n", sizeof(X.name));
  printf("sizeof(person.age): %dbyte\n", sizeof(X.age));
  printf("sizeof(person.sex): %dbyte\n", sizeof(X.sex)); // 4byte
  printf("sizeof(person): %dbyte\n", sizeof(X));
