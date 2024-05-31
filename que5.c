#include <stdio.h>
int main()
{
    // Assignment-2 ques 5- Create a program that a sigle character as input and determines whether it is a vowel or a consonant
    char userInput;
    printf("Enter your Alphabet : ");
    scanf("%c", &userInput);

    if (userInput == 'a' || userInput == 'e' || userInput == 'i' || userInput == 'o' || userInput == 'u')
    {
        printf("It is VOWEL");
    }
    else if (userInput == 'A' || userInput == 'E' || userInput == 'I' || userInput == 'O' || userInput == 'U')
    {
        printf("It is a VOWEL");
    }
    else
    {
        printf("Its a CONSONENT");
    }
    return 0;
}