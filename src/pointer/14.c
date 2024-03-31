#include <stdio.h>

void main() {
  float array[]={100.0,200.0,300.0,400.0,500.0};
  float *ptr;
  int len;
  ptr=array;
  printf("%.1f %.1f\n",(ptr-1)[2], (array-1)[2]);
  printf("%.1f %.1f\n",(ptr-20)[23], (array-20)[23]);
}
