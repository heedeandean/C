#include <stdio.h>
#include <string.h>
struct person {
  char name[20];
  char sex;
  int age;
};

typedef struct person MAN; 
typedef unsigned char CHAR; 
typedef int* PTR;

void main() {
  MAN member;
  CHAR data;
  PTR pt;
  strcpy(member.name, "홍길동");
  member.sex = 'M';
  member.age = 30;
  data = 100;
  pt = &(member.age);
  printf("*pt = %d\n", *pt);
}
