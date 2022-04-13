#include<stdio.h>

int main(){
    int price;
    price = 20;
    printf("price = %d\n", price);

    price = price + 30;
    printf("price = %d\n", price);

    price += 30;
    printf("price = %d\n", price);

    return 0;
}
