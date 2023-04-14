#include <stdio.h>

int main(void){
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;
    printf("%.1f\n", *pd);
    
    return 0;
} // 자료형이 다르므로 에러
/*
9-6.c: In function 'main':
9-6.c:8:8: warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
     pd = p;
        ^
*/