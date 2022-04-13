/**
 Write a program to find the perimeter and area of a circle.
 The program will ask the user for radius. and Then print the perimetter and area

 Sample Interaction:
    Enter radius: 1
    Perimeter = 6.28
    Area = 3.14

    Perimeter = 2* pi * r
    Area = pi * r ^ 2
 **/

 #include<stdio.h>
 int main(){
    printf("Enter radius: ");

    double radius;
    scanf("%lf", &radius);

    const double PI = 3.1416;

    double perimeter = 2 * PI * radius;
    printf("perimeter = %lf\n", perimeter);

    double area = PI * radius * radius;
    printf("area = %lf\n", area);

 return 0;
 }
