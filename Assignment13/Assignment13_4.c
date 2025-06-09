//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment13_4.c
//  Description : Write a program which accepts Number from user and Display Pattern.
//  Input : 3 & 5
//  Output : 4   4   4   4   4   4
//           3   3   3   3   3   3
//           2   2   2   2   2   2
//           1   1   1   1   1   1
//  Author : Ishwari Bharat Khopade.
//  Date : 19/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = iRow; i >= 1; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
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
