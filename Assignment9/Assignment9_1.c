//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment9_1.c
//  Description : Write a program which accepts Number from user and display its digit in reverse order
//  Input : Integer
//  Output : Integer List
//  Author : Ishwari Bharat Khopade.
//  Date : 16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}