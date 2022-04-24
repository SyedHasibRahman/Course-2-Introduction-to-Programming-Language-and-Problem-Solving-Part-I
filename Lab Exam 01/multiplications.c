#include<stdio.h>

int main(){
    int n;
    double A, B;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 0; i<n; i++){
        scanf("%lf %lf", &A, &B);
            double multi = A * B;
            sum += multi;
    }
    printf("%.3lf", sum);

    return 0;
}


