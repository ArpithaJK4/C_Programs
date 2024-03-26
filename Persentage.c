
//Using the fundamentals of c datatype  write a program to read the marks obtained by the student  in three diffrent  subject then compute and display their average


#include <stdio.h>

int main() {
    int marks1, marks2, marks3;
    float average;


    printf("Enter marks obtained in first subject: ");
    scanf("%d", &marks1);

    printf("Enter marks obtained in second subject: ");
    scanf("%d", &marks2);

    printf("Enter marks obtained in third subject: ");
    scanf("%d", &marks3);

    average = (marks1 + marks2 + marks3) / 3.0;

    printf("The average marks obtained in three subjects is: %.2f\n", average);

    return 0;
}
