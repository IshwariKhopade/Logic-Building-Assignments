//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment8_4.c
//  Description : Write a program which accepts Temperature in Fahrenheit and convert it into Celsius.
//                (1 Celsius = (Fahrenheit - 32) * (5/9))
//  Author : Ishwari Bharat Khopade.
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
double FhtoCs(float fTemp)
{
    double dConvert = 0;
    dConvert = ((fTemp - 32) * (5.0 / 9.0));

    return dConvert;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%f\n", dRet);

    return 0;
}