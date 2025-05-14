//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment5_3.c
//  Description : Write a program which accepts Number from user and print it's Number line.
//  Input : Integer
//  Ouput : Integer List
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// Time Complexity = O(N)
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = (-iNo); iCnt<=iNo; iCnt++ )
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
