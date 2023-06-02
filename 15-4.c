#include <stdio.h>

int main(void){
    int ary[5];

    printf("ary의 값 : %u\t", ary);
    printf("ary의 주소 : %u\n", &ary);
    printf("ary + 1 : %u\t", ary + 1);
    printf("&ary + 1 : %u\n", &ary + 1);

    return 0;
}
/*
가리키는 대상이 다르므로 두 주소에 1을 더한 결과는 다르다.
*/