//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment5_4.c
//  Description : Write a program which accepts N Number from user and print all odd Numbers upto N.
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++ )
    {
        if((iCnt%2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}