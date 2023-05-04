#include <stdio.h>

void add_ten(int *pa);

int main(void){
    int a = 10;

    add_ten(&a);
    printf("a : %d\n", a);

    return 0;
}

void add_ten(int *pa){
    *pa = *pa + 10;
}
//포인터를 사용해서 주소를 정해줬기 때문에 return *pa가 없더라도 main에 변수 a를 바꿀 수 있음