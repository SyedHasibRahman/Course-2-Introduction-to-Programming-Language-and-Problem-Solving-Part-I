#include<stdio.h>

int main(){
    int n, t;

    scanf("%d", &n);
    int temp = 0;
    for (int i = 0; i<n; i++){
        scanf("%d", &t);
        if(t<0){
    temp++;
        }
    }
    printf("%d", temp);

    return 0;
}
