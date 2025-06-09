//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment13_3.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 3 & 5
//  Output : A   A   A   A   A   A
//           B   B   B   B   B   B
//           C   C   C   C   C   C
//  Author : Ishwari Bharat Khopade.
//  Date : 19/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%c\t", 'A' + i);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows and Columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
