#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main (){
    srand(time(0));
     int hid = rand()%100 +1;
//     printf("%d\n", hid);

     int numberOfGuess = 0;

     while (numberOfGuess < 10){
        int guess;
        scanf("%d", &guess);

        if(guess == hid){
            printf("You are right\n");
            break;
        }
        else if(guess > hid){
            printf("Guess smaller\n");
        }else{
            printf("Guess Larger\n");
        }
        numberOfGuess++;
     }

     if (numberOfGuess == 5){
        printf("Fail");
     }
}
