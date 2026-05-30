
#include<stdio.h>
int main()
{   
    // Variable creation with default Value
    
    float i=0.0f, j=0.0f , k=0.0f ;
    
    printf("Enter First Number :\n");
    scanf("%f",&i);

    printf("Enter Second Number :\n");
    scanf("%f",&j);

    k = i+j;

    printf("Addition is : %f",k);

    return 0;
}