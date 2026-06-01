/////////////////////////////////////////////////////////
//
//  Include Required HeaderFiles 
//
/////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////
// 
//Function name: AddTwoNumbers                                                                   
// Input:       float,float                                       
// Output:      float
// Description: perform Addition of two Floats
// Date:        08/05/2026
// Author:      Vedant Chetan Kadam
//                                               
/////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNO1 ,            //First Input
                        float fNo2              //Second Input
                    )

{
    float fAns=0.0f;                            //Variable to Store Result 
    fAns=fNO1+fNo2;                             //Perform Addition 
    return fAns;                                        
}

/////////////////////////////////////////////////////////
//
//      Application TO perform Addition of 2 Float Values 
//
/////////////////////////////////////////////////////////

int main()
{   
    
    float fValue1=0.0f ;                        //To Store First Comment 
    float fValue2=0.0f ;                        //To Store Second Comment 
    float fResult=0.0f ;                        //To Store Result

    printf("Enter First Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number :\n");
    scanf("%f",&fValue2);

    fResult=AddTwoNumbers(fValue1,fValue2);     //Function Called 

    printf("Addition is : %f \n",fResult);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input : 10.0    11.0
//  Output: 21.0
//
/////////////////////////////////////////////////////////