#include <stdio.h>

int main(void){
    char small, cap = 'G';

    if((cap >= 'A') && (cap <= 'Z')){
        small = cap + ('a' - 'A');     //아스키코드의 차이를 이용하여 대문자를 소문자로 변환
    }

    printf("대문자 : %c %c", cap, '\n'); //%c를 사용해서 \n을 출력하면 줄이 바뀐다
    printf("소문자 : %c", small);

    return 0;
}