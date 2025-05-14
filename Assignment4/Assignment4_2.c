//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment4_2.c
//  Description : Write aprogram which accepts Number from user and Display it's factors in decreasing order.
//  Input : Integer
//  Output : Integer List
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(N/2)
void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo/2); iCnt>0 ; iCnt--)
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
