#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);


    if((A==5) && (B == 5) && (C== 7)){
        printf("YES\n");
    }else if( (A==5) && (B == 7) && (C== 5)){
        printf("YES\n");
    }else if((A==7) && (B == 5) && (C== 5)){
        printf("YES\n");
    }else {
        printf("NO\n");
    }

    return 0;
}



/*
You will be given three numbers AA, BB and CC respectively. Determine whether you can construct a sequence 575 by using each of the phrases once, in any order.

*/

