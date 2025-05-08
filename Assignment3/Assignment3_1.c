///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment3_1.c
//  Description : Used to Accept one Number from User & print that number of even numbers on screen.
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo >= 0)
    {
        for(iCnt=1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }

    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
