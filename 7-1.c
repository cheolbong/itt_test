#include <stdio.h>

int sum(int x, int y);
/*
위 부분이 없으니 터미널에 
7-1.c: In function 'main':
7-1.c:7:14: warning: implicit declaration of function 'sum' [-Wimplicit-function-declaration]
     result = sum(a, b);
              ^~~
이런식으로 나옴
*/

int main(void){
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("result : %d\n", result);

    return 0;
}

int sum(int x, int y){
    int temp;

    temp = x + y;

    return temp;
}