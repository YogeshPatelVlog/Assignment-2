#include <stdio.h>
int main(){
    //Assignment 2-- Ques 3 - Write a program that takes three numbers as input and outputs the largest among them Use conditional Statements to compare them
    int a,b,c;
    printf("Enter your first number : ");
    scanf("%d",&a);
    printf("Enter your second number : ");
    scanf("%d",&b);
    printf("Enter your third number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("A is greater ");
        }
        else{
            printf("C is greater ");
        }
    }
    else{
        if (b>c)
        {
            printf("B is greater ");
        }
        else{
            printf("C is greater");
        }
        
    }
        
    return 0;
}