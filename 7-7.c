#include <stdio.h>

void fruit(int count);

int main(void){
    fruit(1);

    return 0;
}

void fruit(int count){
    printf("apple\n");
    if(count == 3) return;
    fruit(count + 1);  //재귀함수
    printf("jam\n");  //재귀함수가 끝나면 실행
}