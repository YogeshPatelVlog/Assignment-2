#include <stdio.h>
int main()
{
    // create a program that determines whether a given year is leap year or not

    int leapYear;
    printf("Enter your year : ");
    scanf("%d", &leapYear);

    if(leapYear %4 == 0){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year"):
    }

    return 0;
}
