
#include<stdio.h>
#include<stdbool.h>

int main(){

    int numberOfSubject, totalGradePoint;
    scanf("%d", &numberOfSubject);

    bool failed = false;

    for (int i = 1; i<= numberOfSubject; i++){
        printf("Enter Marks");

        int marks, gradePoint;
        scanf("%d", &marks);

        if(marks >=80){
            printf("Grade = A+\n");
            gradePoint = 5;
        }
        else if( marks >= 70){
            printf("Grade = A\n");
            gradePoint = 4;
        }
        else if( marks >= 60){
            printf("Grade = B\n");
            gradePoint = 3;
        }
        else if( marks >= 50){
            printf("Grade = C\n");
            gradePoint = 2;
        }
        else if( marks >= 33){
            printf("Grade = D\n");
            gradePoint = 1;
        }
        else {
            printf("Grade = F\n");
            gradePoint = 0;
            failed = true;
        }
        totalGradePoint += gradePoint;
        printf("Grade Point = %d\n", gradePoint);
    }

    double gpa = (double)totalGradePoint/numberOfSubject;
    if(failed){
        printf("Faill: 0.00");
    }else{
        printf("GPA = %lf\n", gpa);
    }
}
