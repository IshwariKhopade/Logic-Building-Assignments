//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment6_3.c
//  Description : Write a program to find Factorial of given Number.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(N)
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("%d\n", iRet);

    return 0;
}