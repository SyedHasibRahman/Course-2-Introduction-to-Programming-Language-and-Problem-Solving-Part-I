#include<stdio.h>
int main(){
    int sum = 0;
    for (int i=1; i <= 10; i++){
        sum +=i;
        printf("Add: %d: new sum = %d\n", i*i, sum);
    }
    printf("Sum: %d\n", sum);


}


/*

Module 5.5 practice problem solve:

sum 1 to 100; sum ++
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i=1; i<=100; i++){
        sum +=i;
        printf("Add: %d: new sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum);


}


======================
1 to 29 sum with sum += 2;
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i=1; i<=29; i+=2){
        sum +=i;
        printf("Add: %d: new sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum);


}

//50+49+48+47... (20 pod er jog)
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i=50, j=1; j<=20; i--, j++){
        sum +=i;
        printf("J= %d Add: %d: new sum = %d\n", j, i, sum);
    }
    printf("Sum: %d\n", sum);


}

=================
=================
2+5+8+11+14+.... (10 pod er jog)
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i=2, j=1; j<=10; i+=3, j++){
        sum +=i;
        printf("J= %d Add: %d: new sum = %d\n", j, i, sum);
    }
    printf("Sum: %d\n", sum);


}


=================

#include<stdio.h>
int main(){
    int sum = 0;
    for (int i=100; i > 0; i-=3){
        sum +=i;
        printf("Add: %d: new sum = %d\n", i, sum);
    }
    printf("Sum: %d\n", sum);


}
*/
