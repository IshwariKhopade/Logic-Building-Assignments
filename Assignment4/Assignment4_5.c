//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment4_5.c
//  Description : Write aprogram which accepts Number from user and return difference between Summation of 
//                all its Factors and  Non-Factors.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}
