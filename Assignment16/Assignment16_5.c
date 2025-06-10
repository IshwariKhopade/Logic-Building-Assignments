//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment16_5.c
//  Description : Write a program which accepts Number of rows and columns from user and Display Pattern.
//  Input : 4 & 4
//  Output : 1   2   3   4   
//               2   3   4        
//                   3   4
//                       4   
//  Author : Ishwari Bharat Khopade.
//  Date : 10/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i <= j )
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
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
