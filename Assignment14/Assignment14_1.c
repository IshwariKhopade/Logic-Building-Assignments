//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment14_1.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 3 & 4
//  Output : 1   2   3   4
//           5   6   7   8
//           9   1   2   3
//           4   5   6   7
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

    for (i = 0; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
            num++;
            if (num > 9)
            {
                num = 1;
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
