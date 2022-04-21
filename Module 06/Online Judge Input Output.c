#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for(int cs=0; cs<t; cs++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", cs+1 , a+b);
    }

    return 0;

}


/*
#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int cs = 0; cs < t; cs++){
        int a, b;
        scanf("%d %d", &a, &b);

        printf("Case %d: %d\n", cs, a+b);
            }

    return 0;

}


*/


