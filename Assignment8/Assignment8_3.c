//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment8_3.c
//  Description : Write a program which accepts distance in kilometer and convert it into meter.(1km = 1000m)
//  Author : Ishwari Bharat Khopade.
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
int KMtoMeter(int iNo)
{
    int iConvert = 1;
    iConvert = iNo * 1000;
    return iConvert;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance :\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d KM = %d Meter ", iValue, iRet);

    return 0;
}