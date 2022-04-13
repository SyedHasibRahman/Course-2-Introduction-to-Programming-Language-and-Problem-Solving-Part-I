#include<stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int jogfol = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, jogfol);


    int biogfol = num1 - num2;
    printf("%d - %d= %d\n", num1, num1, biogfol);

    int gunfol = num1 * num2;
    printf("%d * %d= %d\n", num1, num1, gunfol);

    int vagfol = num1 / num2;
    printf("%d / %d= %d\n", num1, num1, vagfol);


    int vagses = num1 % num2;
    printf("%d %% %d= %d\n", num1, num1, vagses);


    return 0;
}
