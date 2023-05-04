#include <stdio.h>

int main(void){
    int a = 10, b = 20;

    printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
    {   //블록
        int temp;   //블록 안에 선언된 변수는 지역변수로 블록이 끝날 때 메모리도 자동으로 회수된다.

        temp = a;
        a = b;
        b = temp;
    }
    printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

    return 0;
}