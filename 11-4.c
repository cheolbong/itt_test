#include <stdio.h>

int main(void){
    char ch;
    int i;

    for(i = 0; i < 3; i++){ //3번 실행이 되어야하지만 직접 돌려보니 2번만 실행
        scanf("%c", &ch);   //한번에 여러 글자를 넣을 경우 3번 실행
        printf("%c", ch);   //버퍼를 활용한 예제
    }

    return 0;
}