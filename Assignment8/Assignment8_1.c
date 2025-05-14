//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment8_1.c
//  Description : Write a program which accepts radius of circle from user and Calculate it's Area.
//                Consider value of P.I as 3.14. (Area = PI *Radius *Radius)
//  Input : Float
//  Output : Double
//  Author : Ishwari Bharat Khopade.
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
double CircleArea(float fRadius)
{
    double dArea = 0;
    float PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Radius:\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Radius is %f", dRet);

    return 0;
}