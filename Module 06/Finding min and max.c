#include<stdio.h>

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int water_left = A - B;
    int water_poured = water_left < C ? water_left : C;

    C -= water_poured;

    printf("%d\n", C);

//    int water_left = A - B;
//
//    if (water_left >= C){
//        printf("0\n");
//    }else{
//        C -= water_left;
//        printf("%d\n", C);
//    }


    return 0;
}


/*
#include<stdio.h>

int main(){
    int a = 10, b = 20;
    int max_ab;

    if(a > b){
        max_ab = a;
    }else{
        max_ab = b;
    }

    printf("%d", max_ab);
    return 0;
}

==============

#include<stdio.h>

int main(){
    int a = 10, b = 20;
    int max_ab = a > b ? a : b;
    int min_ab = a < b ? a : b;


    printf("Max is: %d\n", max_ab);
    printf("Min is: %d\n", min_ab);
    return 0;
}


*/
