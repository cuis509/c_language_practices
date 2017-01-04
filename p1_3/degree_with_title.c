#include<stdio.h>
// c = (5/9) * (f-32)
int main () {
    int fahr = 0;
    int celsius = 0;
    
    int lower = 0;
    int upper = 300;
    int step = 20;
    
    fahr = lower;
    printf("celsius\t--->fahr\n");
    printf("-----------------\n");
    while (fahr < upper) {
        celsius = (5*(fahr - 32))/9;
        printf("fahr=%3d--->celsius=%3d\n",celsius, fahr);
        fahr = fahr + step;
    }
    getchar();
    return 0;
}
