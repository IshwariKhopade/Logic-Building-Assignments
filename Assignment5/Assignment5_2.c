//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment5_2.c
//  Description : Write a program which accepts Number from user and print Numbers till that Number.
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++ )
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}