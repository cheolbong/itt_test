#include <stdio.h>

void add_ten(int a);

int main(void){
    int a = 10;

    add_ten(a);
    printf("a : %d\n", a);

    return 0;
}

void add_ten(int a){
    a = a + 10;     //매개변수 a에 넣고 return a;가 없기 때문에 원래의 변수로 반환하지 않음
}