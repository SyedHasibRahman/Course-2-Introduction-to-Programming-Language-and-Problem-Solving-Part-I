#include<stdio.h>

int main(){

    int marks_engligh;
    int marks_math;

    printf("Enter Marks in English & Math: ");
    scanf("%d %d", &marks_engligh, &marks_math);


    int total_marks = marks_engligh + marks_math;
    printf("Total Marks: %d", total_marks);


  /*
    float template;
    printf("Enter Temp");
    scanf("%f", &template);
    printf("Temp = %f", template);

     */

    return 0;
}
