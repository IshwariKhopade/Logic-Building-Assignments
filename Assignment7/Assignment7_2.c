//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment7_2.c
//  Description : Accept amount in US dollar and return it's corresponding value in Indian currency.
//                Consider 1$ as 70 rupees.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade.
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(N)
int DollarToINR(int iNo)
{
    int iMult;
    iMult = iNo * 70;
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d", iRet);

    return 0;
}