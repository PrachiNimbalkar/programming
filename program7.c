//Naming Convention

#include<stdio.h>
int main()
{   
    
    float fValue1=0.0f ;                      //To Store First Comment 
    float fValue2=0.0f ;                      //To Store Second Comment 
    float fResult=0.0f ;                      //To Store Result
    
    printf("Enter First Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number :\n");
    scanf("%f",&fValue2);

    fResult=fValue1+fValue2;

    printf("Addition is : %f",fResult);        //Perform Addition

    return 0;
}