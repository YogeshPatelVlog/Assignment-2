#include <stdio.h>
int main()
{
    // Assignment-2 Ques-6 Write a program to calculate a average of three integers numbers are given by users
    int num1, num2, num3;
    printf("Enter your first Number : ");
    scanf("%d", &num1);
    printf("Enter your second number :");
    scanf("%d", &num2);
    printf("Enter your third number : ");
    scanf("%d", &num3);
    float average = (num1 + num2 + num3) / 3;
    printf("Your Average value is %f: ", average);
    return 0;
}