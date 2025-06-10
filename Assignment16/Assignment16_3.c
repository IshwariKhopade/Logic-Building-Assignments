//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment16_3.c
//  Description : Write a program which accepts Number of rows and columns from user and Display Pattern.
//  Input : 6 & 6
//  Output : $   *   *   *   *
//           #   $   *   *   *
//           #   #   $   *   *
//           #   #   #   $   * 
//           #   #   #   #   $   
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
            if (i == j)
            {
                printf("$\t");
            }
            else if(i < j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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
