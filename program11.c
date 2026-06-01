/*
    START
        Accept number as No
        if No is completely divisible by 2 
            print 'even' 
                 otherwise
             print 'odd'
    STOP

    START 
        Accept number as No
        Devide No by 2
        if remainder is 0 
            then print as even
        otherwise 
            print as odd
    STOP
     
*/

#include<stdio.h>

int main()
{
    int iValue=0;
    int iReminder=0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iReminder = iValue % 2;

    if(iReminder==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    
    return 0;
}