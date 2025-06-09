//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment14_2.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 3 & 4
//  Output : 2   4   6   8
//           1   3   5   7
//           2   4   6   8
//           1   3   5   7
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
        if (i % 2 == 0)
        {
            num = 2;
            for (j = 0; j < iCol; j++)
            {
                printf("%d\t", num);
                num = num + 2;
            }
        }
        else
        {
            num = 1;
            for (j = 0; j < iCol; j++)
            {
                printf("%d\t", num);
                num = num + 2;
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
