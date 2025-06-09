//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment11_4.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 5
//  Output :  #   1   *   #     2   *   #     3   *   #     4   *   #    5   *
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

    for (i = 1; i <= iNo; i++)
    {
        printf("#\t");
        printf("%d\t", i);
        printf("*\t");
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
