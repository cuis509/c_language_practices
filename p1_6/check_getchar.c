#include<stdio.h>
int main () {
    printf("Value if (getchar() != EOF) is %d\n", (getchar() != EOF));
    getchar();
    return 0;
}
