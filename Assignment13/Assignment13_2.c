//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment13_2.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 4 & 4
//  Output : A   B   C   D
//           a   b   c   d
//           A   B   C   D
//           a   b   c   d
//  Author : Ishwari Bharat Khopade.
//  Date : 19/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", 'A' + j);
            }
            else
            {
                printf("%c\t", 'a' + j);
            }
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
