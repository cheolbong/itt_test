#include <stdio.h>

int main(void){
    char str[5];

    str[0] = 'O';
    str[1] = 'K';
    printf("%s\n", str);

    return 0;
}//NULL 값이 없을 경우
/*
널 문자가 나오는 메모리 영역까지 쭉 출력
*/