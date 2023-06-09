#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if(pi == NULL){
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1lf\n", *pd);

    free(pi);
    free(pd);

    return 0;
}
/*
malloc 함수는 메모리를 동적 할당할 때 free 함수는 반환할 때 사용한다
*/