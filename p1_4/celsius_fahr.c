#include<stdio.h>
// c = (5/9) * (f-32)
// f = ((9*c)/5) + 32
int main () {
    int celsius;
    int fahr;
    int lower;
    int upper;
    int step;
    
    // Initial all var
    celsius = 0;
    fahr = 0;
    lower = 0;
    upper = 200;
    step = 20;
    
    printf("Celsius----------->Fahr\n");
    printf("--------------------------\n");
    while (celsius < upper) {
          fahr = ((9 * celsius)/5) + 32;
          printf("Celsius is %4d, fahr is %4d\n", celsius, fahr);
          celsius = celsius + step;
    }
    getchar();
    return 0;
}
