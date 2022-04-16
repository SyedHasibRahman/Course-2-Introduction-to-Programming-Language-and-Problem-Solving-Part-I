/*
7. একটা প্র োগ্রাম লি খ যে টা ত োমার উচ্চতা ইনপুট নি বে ইঞ্চি তে , তারপর সে টাকে ফুট আর ইঞ্চি
ফরম্যাট এ আউটপুট দি বে ।
Example:
Enter height is inches: 65
Your height is 5 feet 5 inches

*/

#include<stdio.h>

int main(){
    int height;
    printf("Enter Height in inches: ");
    scanf("%d", &height);

    int feet, inch;
    feet = height/12;
    inch = height%12;

    printf("Your height is %d feet %d inches", feet, inch);
    return 0;
}
