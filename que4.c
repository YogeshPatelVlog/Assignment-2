#include <stdio.h>
int main()
{
    // Assignment-2 Ques 4- Develop a program that reads a number from the user and prints whether it is positive, negative, or zero
    int userNO;
    printf("Enter your number : ");
    scanf("%d", &userNO);
    if (userNO == 0)
    {
        printf("Your number is Zero ");
    }
    else if (0 < userNO)
    {
        printf("Your number is Positive");
    }
    else
    {
        printf("Your number is negative");
    }

    return 0;
}