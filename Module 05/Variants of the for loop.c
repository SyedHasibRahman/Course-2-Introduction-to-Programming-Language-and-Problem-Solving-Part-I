#include<stdio.h>

int main(){
    int i = 1, j = 9;
    for ( ;i<=j; i++, j--){
        printf("%d - %d\n", i, 10-i);
    }
    /*
    for (int i = 1; i<=5; i++){
        printf("%d - %d\n", i, 10-i);
    }
    */

    printf("At End: %d - %d\n", i, 10-i);
    return 0;
}

/***
1 - 9
2 - 8
3 - 7
4 - 6
5 - 5
*/
