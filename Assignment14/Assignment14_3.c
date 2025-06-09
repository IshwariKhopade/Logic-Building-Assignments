//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment14_3.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 3 & 4
//  Output : a   b   c   d
//           1   2   3   4
//           a   b   c   d
//           1   2   3   4
//  Author : Ishwari Bharat Khopade.
//  Date : 19/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int num = 1;
    char ch = '\0';

    for (i = 0; i <= iRow; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < iCol; j++)
            {
                printf("%c\t", 'a' + j);
            }
        }
        else
        {
            num = 1;
            for (j = 0; j < iCol; j++)
            {
                printf("%d\t", num);
                num++;
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
