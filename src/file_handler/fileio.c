#include <stdio.h>

// 파일 입출력
void main() {
  char ch;
  FILE *fp; // 파일 포인터 선언: 파일과 프로그램을 연결해 주는 통로.
  fp = fopen("test.txt", "w"); 
  for(ch='A'; ch<='Z'; ch++)
    fputc(ch, fp);
  fclose(fp);
}
