#include <stdio.h>
int main()
{
    //Assingnment 2- Ques 2 Implement a simple calculator program that takes two numbers and an opeator (+,-,/,*) as input and performs the corresponding operations

    int num1, num2, sum;
    char op;
    printf("Enter your operation ('+','-','/','*') : ");
    scanf("%c", &op);
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);

    switch (op)
    {
    case '*':
        printf("%d",num2*num1);
        break;

    case '+':
        printf("%d",num1+num2);
        break;
    case '-':
        printf("%d",num1-num2);
        break;
    case '/':
        printf("%d",num1/num2);
        break;
    default:
        break;
    }
}