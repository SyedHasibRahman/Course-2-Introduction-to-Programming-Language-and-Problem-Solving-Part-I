#include<stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);


    if(A + B <= 9 ){
        printf("%d", A + B);
    } else{
        printf("error");
    }


    return 0;
}




