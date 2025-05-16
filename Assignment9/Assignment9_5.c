///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment9_5.c
//  Description : Write a program which accepts Number from user and count freqency of such digits which are less than 6.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade.
//  Date : 16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
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
        if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}