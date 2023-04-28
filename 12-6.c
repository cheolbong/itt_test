#include <stdio.h>

int main(void){
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);  //scanf함수가 숫자로 변환하여 age에 저장하고 이 때 버퍼에 남아 있는 개행문자가 12행의 gets함수의 입력으로 쓰임

    printf("이름 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n", age, name);

    return 0;
}