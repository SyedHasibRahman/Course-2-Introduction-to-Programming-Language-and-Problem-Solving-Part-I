#include<stdio.h>

int main(){

    int t, i;
    scanf("%d", &t);
    double sum = 0;
    for(i = 1; i <t; i++){
        double a, b;
        scanf("%lf %lf", &a, &b);
        printf("%lf", a * b);
    }
    return 0;
}



/*
You will be given three numbers AA, BB and CC respectively. Determine whether you can construct a sequence 575 by using each of the phrases once, in any order.

*/

