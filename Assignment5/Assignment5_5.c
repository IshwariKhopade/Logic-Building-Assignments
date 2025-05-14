//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment5_5.c
//  Description : Write a program which accepts N Number from user and print first 5 multiples of N.
//  Input : Integer
//  Ouput : Integer List
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// TimeComplexity = O(N)
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t", iMult);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
