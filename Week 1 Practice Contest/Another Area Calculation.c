
#include<stdio.h>

int main(){
    int a, b, h;
    scanf("%d %d %d", &a, &b, &h);

    int trapezoid = 0.5 *(a + b) * h;

    printf("%d", trapezoid);


    return 0;
}
