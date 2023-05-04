#include <stdio.h>

int main(void){
    register int i;     //register변수는 CPU 안에 있는 공간인 레지스터를 사용하여 데이터 처리 속도가 빠름
    auto int sum = 0;

    for(i = 1; i <= 10000; i++){
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}