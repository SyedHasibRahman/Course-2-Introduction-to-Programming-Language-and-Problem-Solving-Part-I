#include<stdio.h>
#include<stdbool.h>

int main(){

     while(true){
        int input;
        scanf("%d", &input);

        if(input == 0) break;

        printf("%d\n", input);
     }

    return 0;
}



/*
#include<stdio.h>

int main(){
    for(int i=1; i<=10; i++){
        printf("%d\n", i);


        if(i%8==5){

        break;
        }
    }

    return 0;
}



*/
