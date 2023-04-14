#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    const int *pa = &a;

    printf("변수 a 값 : %d\n", *pa);
    pa = &b;
    printf("변수 b 값 : %d\n", *pa);
    pa = &a;//pa값은 a의 주소값
    a = 20;
    printf("변수 a 값 : %d\n", *pa); //pa는 a의 주소값이므로 pa = &a를 먼저 실행하고 a = 20을 실행해도 pa는 20임

    return 0;
}