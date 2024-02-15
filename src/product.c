// 도입부
#include <stdio.h> // 선행처리기(preprocessor)
#pragma warning(disable:4996) 
int a, b, c; // 전역변수 선언
int product(int x, int y);

void main() { // 가장 먼저 호출, 반드시 존재⭐️ / void: 반환값X
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    printf("Enter another number between 1 and 100: ");
    scanf("%d", &b);

    c = product(a, b);
    printf("%d * %d = %d\n", a, b, c);
}

/* 사용자 함수 */
int product(int x, int y) {
    return (x * y);
}
