#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
//
    int case1 = A + B;
    int case2 = A + C;
    int case3 = B + C;

    if(case1 <= case2 && case1 <= case3){
        printf("%d", case1);
    }else if(case2 <= case1 && case2 <= case3){
        printf("%d", case2);
    }else if(case3 <= case1 && case3 <= case2){
        printf("%d", case3);
    }
    return 0;
}
