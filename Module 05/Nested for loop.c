#include<stdio.h>

int main(){
    int height, width;
    scanf("%d %d", &height, &width);

    printf("****************\n");
    for(int i = 0; i<=height-2; i++){
        printf("*\n");
        for(int j = 0; j<width-2;j++){
            printf(" ");
        }
        printf("*\n");
    }


    printf("****************\n");
    return 0;
}
