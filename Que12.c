#include <stdio.h>
int main(){
    //Assignment-2 Ques-12 Develop a program that takes a students score (0-100) as input and prints the corresponding grade (A,B,C,D,E,F) based on grading scale
    int studentScore;
    printf("Enter your Score (0-100) : ");
    scanf("%d",&studentScore);
    if(studentScore > 90 && studentScore < 100){
        printf("Your grade is 'A'");
    }
    else if(studentScore > 80 && studentScore < 90){
        printf("Your grade is 'B'");
    }
    else if(studentScore > 70 && studentScore < 80){
        printf("Your grade is 'C'");
    }
    else if(studentScore > 60 && studentScore < 70){
        printf("Your grade is 'D'");
    }
    else if(studentScore > 50 && studentScore < 60){
        printf("Your grade is 'E'");
    }
    else if(studentScore > 40 && studentScore < 50){
        printf("Your grade is 'F'");
    }

}