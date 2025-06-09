//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment11_1.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 5
//  Output :  A   B   C   D  E
//  Author : Ishwari Bharat Khopade.
//  Date : 19/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iNo)
{
    char ch = '\0';

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (ch = 'A'; ch < 'A' + iNo; ch++)
    {
        printf("%c\t", ch);
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
