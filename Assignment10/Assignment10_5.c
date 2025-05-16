//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment10_5.c
//  Description : Write a program which accepts Number from user and return difference between summation
//                of even digits and sumation of odd digits.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade.
//  Date : 16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}