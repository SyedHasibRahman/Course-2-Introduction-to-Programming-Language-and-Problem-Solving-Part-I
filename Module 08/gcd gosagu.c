#include<stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
//    int gcd = 1;
//    for (int g = 1; g<=a && g<=b; g++){
//        if(a%g == 0 && b%g == 0){
////            printf("Common factor: %d\n", g);
//            gcd = g;
//        }
//    }

    while (a !=0){
        int rem = b%a;
        b = a;
        a = rem;
        printf("%d %d\n", a, b);
    }

    printf("gcd = %d\n", b);

    return 0;
}




/*
    30 42

    6 3 2 1 // here sob theke boro vognanso k gosagu bole



*/
