//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment11_2.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 5
//  Output :  5  #   4   #   3   #   2   #   1   #
//  Author : Ishwari Bharat Khopade.
//  Date : 19/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iNo)
{
    int i = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = iNo; i >= 1; i--)
    {
        printf("%d\t", i);
        printf("#\t");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number of elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
