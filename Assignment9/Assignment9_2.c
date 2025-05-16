//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment9_2.c
//  Description : Write a program which accepts Number from user and check whether it contains 0 or not in it.
//  Input : Integer
//  Output : String
//  Author : Ishwari Bharat Khopade.
//  Date : 16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

#define True 1
#define False 0

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    else if (iNo == 0)
    {
        return True;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return True;
        }
        else
        {
            return False;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = False;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == True)
    {
        printf("Number contains Zero");
    }
    else
    {
        printf("Number does not contain Zero");
    }

    return 0;
}