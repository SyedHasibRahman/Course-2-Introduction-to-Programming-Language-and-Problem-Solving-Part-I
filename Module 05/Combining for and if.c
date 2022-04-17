#include<stdio.h>

int main(){
     int n;
        scanf("%d", &n);
        int count = 0;
     for(int i = 1; i<=n; i++){
        if(n%i==0){
            printf("%d \n", i);
            count++;
        }
     }
     printf("Number of divisors = %d\n",count);
    return 0;
}


/*

odd even number
#include<stdio.h>

int main(){
     int n = 10;

     for(int i = 0; i<10; i++){
        if(i%2==0){
            printf("%d is even\n", i);
        }else{
            printf("%d is odd\n", i);

        }
     }
    return 0;
}
100 er upadok

#include<stdio.h>

int main(){
     int n = 100;

     for(int i = 1; i<=n; i++){
        if(n%i==0){
            printf("%d \n", i);
        }
     }
    return 0;
}
*/
