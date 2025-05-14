//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment5_1.c
//  Description : Write a program which accepts Number from user and print that number of $ & * on screen.
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(N)
void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++ )
    {
        printf("$\t");
        printf("*\t");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
