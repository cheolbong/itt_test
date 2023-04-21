#include <stdio.h>

int main(void){
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;
    int *pb = pa + 3;   //pa = ary[0]이므로 pa + 3 = ary[3]이다.

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);

    pa++;   //pa = ary[1]로 변환
    printf("pb - pa : %u\n", pb - pa);  //*pb - *pa = 20이지만 pb - pa 이므로 주소값을 빼야함 -> ary 배열의 주소 시작이 28이라고 가정하면
                                        //pb = 40 pa = 32 pb - pa = 8 이지만 sizeof(int)로 나눠주면 2가 나옴
    printf("앞에 있는 배열 요소의 값 출력 : ");
    if(pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0;
}