#include <stdio.h>
int main(){
    //Assignment-2 ques-14 Create a program that takes the length of tghree side sof a triangle as input and determine whether the triangle is equilateral,isosceles,or scalene 
    int firstSide,secondSide,thirdSide;
    printf("Enter your first side : ");
    scanf("%d",&firstSide);
    printf("Enter your second side : ");
    scanf("%d",&secondSide);
    printf("Enter your third side : ");
    scanf("%d",&thirdSide);

    if(firstSide == secondSide && secondSide == thirdSide && thirdSide == firstSide){
        printf("It is Equilateral Triangle ");
    }
    else if(firstSide == secondSide && secondSide == firstSide || secondSide == thirdSide && thirdSide == secondSide || firstSide == thirdSide && thirdSide == firstSide ){
        printf("It is Isosceles Triangle");
    }
    else{
        printf("It is Scalene Triangle");
    }

    return 0;
}