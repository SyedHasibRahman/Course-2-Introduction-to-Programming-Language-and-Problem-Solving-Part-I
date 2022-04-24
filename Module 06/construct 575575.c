#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

//    int CaseOne = A==5 && (B == 5 && C== 7);
//    int CaseTwo = A==5 && (B == 7 && C== 5);
//    int CaseThree = A==7 && (B == 5 && C== 5);
    if(A==5 && (B == 5 && C== 7)){
        printf("Yes\n");
    }else if(A==5 && (B == 7 && C== 5)){
        printf("Yes\n");
    }else if(A==7 && (B == 5 && C== 5)){
        printf("Yes\n");
    }else {
        printf("No\n");
    }


    return 0;
}


