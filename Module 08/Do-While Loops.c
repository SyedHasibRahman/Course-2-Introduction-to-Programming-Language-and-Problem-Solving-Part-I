#include<stdio.h>

int main (){
    int x;

    do{
        scanf("%d", &x);
    } while(x%2 !=0);
    printf("Input: %d", x);
}
