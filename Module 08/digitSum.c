#include<stdio.h>

int main(){
    int X;
    scanf("%d", &X);

    int sum = 0;
    while(X > 0){
        int digit = X%10;
        X/=10;
        sum += digit;
//        printf("Digit = %d, x =%d\n", digit, X);
    }
    printf("Digit sum = %d", sum);
    return 0;
}
