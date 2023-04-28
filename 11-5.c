#include <stdio.h>

int main(void){
    int res;
    char ch;

    while(1){
        res = scanf("%c", &ch);
        if(res == -1) break;    //Ctrl + Z를 누르면 -1이 반환
        printf("%d ", ch);      //-1대신 EOF 사용 가능 EOF = End Of File의 약자
    }

    return 0;
}