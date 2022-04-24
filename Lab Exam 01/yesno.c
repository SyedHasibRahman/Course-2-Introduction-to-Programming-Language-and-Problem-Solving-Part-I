#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(("%d", A)<=("%d", C) && ("%d", C)<=("%d", B) ){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}



