#include <stdio.h>
int main(){
    //Assignment-2 ques-15 Develop a program that converts a temperature from fahrenheit to celcius or vice versa based on user input the user should specify the type of conversion
    int Temp1,Temp2;
    int choose;
    printf("Enter your Choose : \n 1.Fahrenheit to Celcius - \n 2.Celcius to fahrenheit - \n");
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
        printf("Enter your degree TO you convert : ");
        scanf("%d",&Temp1);
        printf("Your 'Fahrenheit to Celcius is : %f' degree", Temp1 * (-17.22222) );
        break;
    case 2 : 
        printf("Enter your degree TO you convert : ");
        scanf("%d",&Temp2);
        printf("Your 'Fahrenheit to Celcius is : %f' degree", Temp2 * (33.8) );
        break;
    }
    
    return 0;
}