#include<stdio.h>

void CheckEvenOdd(int iNo)
{

    int iReminder=0;
    iReminder = iNo % 2;

    if(iReminder==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}