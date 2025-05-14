//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment8_5.c
//  Description : Write a program which accepts Area in square feet and convert it into square meter.
//                (1 Square feet = 0.0929 Square meter)
//  Author : Ishwari Bharat Khopade.
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
double SquareMeter(int iValue)
{
    double dConvert = 1;
    dConvert = iValue * 0.0929;
    return dConvert;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet :\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%f\n", dRet);

    return 0;
}