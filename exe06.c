#include <stdio.h>

int main(){

    int res, x;
    x = 1;

    res = 2*1;
    printf("%d \n", res);
    res = 2*2;
    printf("%d \n", res);
    res = 2*3;
    printf("%d \n", res);
    res = 2*4;
    printf("%d \n", res);
    res = 2*5;
    printf("%d \n", res);
    res = 2*6;
    printf("%d \n", res);
    res = 2*7;
    printf("%d \n", res);
    res = 2*8;
    printf("%d \n", res);
    res = 2*9;
    printf("%d \n", res);
    res = 2*10;
    printf("%d \n", res);
    printf("=========\n");

    while (x <= 10){
        res = 2 * x;
        printf("2 x %d = %d \n", x, res);
        x++;
    }
}