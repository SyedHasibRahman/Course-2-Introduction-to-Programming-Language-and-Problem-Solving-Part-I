#include<stdio.h>

int main(){
    int money = 0;
    int target = 100;

    while(money < target){
        printf("Enter money: ");
        int given;
        scanf("%d", &given);
        money += given;
        printf("Current: %d\n", money);

    }
    return 0;
}
