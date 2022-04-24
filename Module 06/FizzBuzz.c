#include<stdio.h>

int main(){
    int X, Y, N;
    scanf("%d %d %d", &X, &Y, &N);
    int i;

    int nOne = ("%d", X);
    int nTwo = ("%d", Y);

    for(i = 1; i <= N; i++){
        if( (i % nOne == 0) && (i % nTwo == 0) ){
            printf ("FizzBuzz\n");
        }else if (i % nOne == 0){
            printf ("Fizz\n");
        }else if (i % nTwo == 0){
            printf ("Buzz\n");
        }else{
            printf ("%d\n", i);
        }
    }


    return 0;
}




