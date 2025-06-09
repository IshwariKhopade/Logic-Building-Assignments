//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment11_5.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 8
//  Output : 2   4    6   8   10   12   14   16
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
        printf("%d\t", 2 * i);
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
