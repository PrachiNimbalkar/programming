#include<stdio.h>

float AddTwoNumbers(float fNO1 , float fNo2)
{
    float fAns=0.0f;
    fAns=fNO1+fNo2;
    return fAns;
}

int main()
{   
    
    float fValue1=0.0f ;                      //To Store First Comment 
    float fValue2=0.0f ;                      //To Store Second Comment 
    float fResult=0.0f ;                      //To Store Result
    
    printf("Enter First Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number :\n");
    scanf("%f",&fValue2);

    fResult=AddTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f \n",fResult);
    return 0;
}