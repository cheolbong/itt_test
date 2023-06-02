#include <stdio.h>

int sum(int, int);

int main(void){
    int (*fp)(int, int);    //함수 포인터
    int res;

    fp = sum;
    res = fp(10, 20);
    printf("result : %d\n", res);

    return 0;
}

int sum(int a, int b){
    return (a + b);
}