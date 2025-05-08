//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment3_2.c
//  Description : Used to Accept one Number from User & print Factors of that number.
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0))
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
