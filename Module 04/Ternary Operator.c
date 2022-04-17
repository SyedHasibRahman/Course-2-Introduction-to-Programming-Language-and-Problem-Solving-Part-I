#include<stdio.h>
#include<stdbool.h>
int main(){
     int num;
     scanf("%d", &num);

     int abs = (num>=0 ? num : -num);

    /* if(num >= 0){
        abs = num;
     }else{
        abs = -num;
     }
     */

     printf("%d", abs);
 return 0;
}

