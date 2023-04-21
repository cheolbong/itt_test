#include <stdio.h>

int main(void){
    int ary[3];
    int *pa = ary;  //ary 배열을 pa라는 포인터 변수로 지정
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];  //pa는 포인터 변수로 ary라는 배열을 가리키고 있기 때문에 *pa = ary 이고 pa[0] = ary[0] 이다.

    for(i = 0; i < 3; i++){
        printf("%5d", pa[i]);
    }

    return 0;
}