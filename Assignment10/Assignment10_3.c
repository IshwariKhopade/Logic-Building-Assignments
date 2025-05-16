//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment10_3.c
//  Description : Write a program which accepts Number from user and return count of Digits in between 3 and 7.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade.
//  Date : 16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}