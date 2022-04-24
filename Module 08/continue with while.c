#include<stdio.h>


int main (){
     int num = 12345;
     int sum = 0;
      while(num > 0){
        int digit = num%10;
        num/=10;
        if(digit%2) continue;
        sum +=digit;
      }
      printf("%d", sum);
    }


