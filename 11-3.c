#include <stdio.h>

int main(void){
    int ch;

    ch = getchar(); //문자만 입력받는 함수로 scanf보다 크기가 작음 대신 숫자는 불가능
    printf("입력한 문자 : ");
    putchar(ch);
    putchar('\n');

    return 0;
}