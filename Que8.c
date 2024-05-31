#include <stdio.h>
int main(){
    //Assignment-2 ques 8- WAP to calculate Simple Interest
    int SI,P,R,T;
    printf("Enter your Principle value : ");
    scanf("%d",&SI);
    printf("Enter your Rate % Value in per Annum : ");
    scanf("%d",&R);
    printf("enter your Time : ");
    scanf("%d",&T);

    SI = (P * R * T)/100;
    printf("Your SI Value is %d : ",SI);
    return 0;
}