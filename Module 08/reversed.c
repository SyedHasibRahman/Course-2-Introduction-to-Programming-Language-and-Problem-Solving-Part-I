#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int sum = 0;
    while(x > 0){
        int digit = x%10;
        x/=10;
        printf("%d\n", digit);
        sum += digit;
//         printf("Digit = %d, x =%d\n", digit, x);
    }

    return 0;
}
