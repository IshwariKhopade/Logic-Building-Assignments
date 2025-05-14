//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment6_4.c
//  Description : Write a program which accepts Number from user and display it's Table.
//  Input : Integer
//  Output : Integer List
//  Author : Ishwari Bharat Khopade
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\n", iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}