#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main (){
     int sum = 0;
        while (sum <= 20) {
        printf("%d\n", sum);
        if (sum < 10) continue;
        sum+=2;
        }
}
