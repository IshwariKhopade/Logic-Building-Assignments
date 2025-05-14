//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment6_1.c
//  Description : Write a program which accepts N Number from user and if number is less than 50 then print
//                small, if it is greater than 50 and less than 100 then print medium, if it is greater
//                than 100 then print large .
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
void Number(int iNo)
{
    if (iNo < 0)
    {
        printf("Invalid Number, Please Enter Valid Number");
    }
    else if (iNo < 50)
    {
        printf("Small\n");
    }
    else if ((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}