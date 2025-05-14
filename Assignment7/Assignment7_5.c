//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment7_5.c
//  Description : Write a program which returns Difference between even Factorial and odd Factorial of given number.
//  Author : Ishwari Bharat Khopade.
//  Input : Integer
//  Output : Integer
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(N)
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }

    iDiff = iFact1 - iFact2;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Differences is %d", iRet);

    return 0;
}