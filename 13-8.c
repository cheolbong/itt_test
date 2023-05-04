#include <stdio.h>

int *sum(int a, int b);

int main(void){
    int *resp;

    resp = sum(10, 20);
    printf("두 정수의 합 : %d\n", *resp);

    return 0;
}

int *sum(int a, int b){ //주소를 반환하는 함수이기 때문에 함수 이름 앞에 *를 붙임
    static int res;     //정적 지역 변수를 사용하여 블록이 끝나도 메모리 반환 X

    res = a + b;

    return &res;        //정적 지역 변수의 주소를 반환
}