/*
algorithm 

START 
    Accept First number as No1
    Accept second number as No2
    Perform Addition on no1 and no1
    Display the result
STOP
    
*/

#include<stdio.h>
int main()
{   
    float i , j , k ;
    
    printf("Enter First Number :\n");
    scanf("%f",&i);

    printf("Enter Second Number :\n");
    scanf("%f",&j);

    k = i+j;

    printf("Addition is : %f",k);

    return 0;
}