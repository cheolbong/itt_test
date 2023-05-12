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
/*
레지스터 변수 주의사항

1. 전역 변수는 레지스터 변수로 선언할 수 없다.
2. 레지스터 변수는 주소를 구할 수 없다.
3. 레지스터의 사용 여부는 컴파일러가 결정한다.
*/