#include <stdio.h>

void swap(void);

int main(void){
    int a = 10, b = 20;

    swap();
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(void){
    int temp;

    temp = a;
    a = b;
    b = temp;
}
//a와 b는 전역변수가 아닌 지역변수 이므로 swap 함수 내에서 사용 불가능
//매개변수를 사용하면 해결