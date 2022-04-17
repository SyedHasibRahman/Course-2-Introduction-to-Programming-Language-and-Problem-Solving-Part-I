#include<stdio.h>
#include<stdbool.h>

int main(){
    int a , b;
    scanf("%d %d", &a, &b);

    if(b != 0){
        if(a%b==0){
            printf("%d is divisible by %d\n", a, b);
        }else{
            printf("%d is not divisible by %d\n", a, b);
        }
    }else{
        printf("%d Can't by %d\n", a, b);
    }


    return 0;
}

// 6 3 -> 6 is not divisible by 3
// 8 3 -> 8 is not divisible by 3
// 7 0 -> 8 you can't divide by 0
