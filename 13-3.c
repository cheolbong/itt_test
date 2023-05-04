#include <stdio.h>

void assign10(void);
void assign20(void);

int a;          //전역변수

int main(void){
    printf("함수 호출 전 a 값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

    return 0;
}

void assign10(void){
    a = 10;
}

void assign20(void){
    int a;

    a = 20;     //지역변수 a를 선언하고 a = 20;을 실행하면 전역변수 a가 아닌 지역변수 a에 들어감
}