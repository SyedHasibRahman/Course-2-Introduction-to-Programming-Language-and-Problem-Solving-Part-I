#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    printf("****************\n");
    for(int i = 0; i<=n-2; i++){
        printf("*              *\n");
    }


    printf("****************\n");
    return 0;
}


/*
Sum
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i<=n; i++){
            sum+=i;
        printf("i = %d, sum = %d\n", i, sum);
    }
    printf("Final Sum = %d\n", sum);
    return 0;
}

Gun:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int product = 1;
    for(int i = 1; i<=n; i++){
            product*=i;
        printf("i = %d, product = %d\n", i, product);
    }
    printf("Final product = %d\n", product);
    return 0;
}


#include<stdio.h>

int main(){
    // n songkhar jogfol
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 2; i<=2*n; i+=2){
            sum+=i;
        printf("i = %d, sum = %d\n", i, sum);
    }
    printf("Final sum = %d\n", sum);
    return 0;
}
// 2, 4, 6, 8, 10 ......, 2n

-------

#include<stdio.h>

int main(){
    // n songkhar jogfol
    int n;
    scanf("%d", &n);
    int sum = 0;
    printf("i\t\t sum\n");
    for(int i = 1; i<=n; i++){
            sum+=2*i;
        printf("%d\t\t%d\n", i, sum);
    }
    printf("Final sum = %d\n", sum);
    return 0;
}
// 1,2,3,4,5..........,n

---------------

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    printf("****************\n");
    for(int i = 0; i<=n-2; i++){
        printf("*              *\n");
    }


    printf("****************\n");
    return 0;
}

****************
*              *
*              *
*              *
*              *
*              *
*              *
*              *
*              *
*              *
****************

*/
