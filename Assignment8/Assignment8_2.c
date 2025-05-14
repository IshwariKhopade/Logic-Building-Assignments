//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment8_2.c
//  Description : Write a program which accepts width & Height of rectangle from user and Calculate it's Area.
//                (Area = Width * Height)
//  Input : Float
//  Output : Double
//  Author : Ishwari Bharat Khopade.
//  Date : 15/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(1)
double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width :\n");
    scanf("%f", &fValue1);

    printf("Enter Height :\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %f", dRet);

    return 0;
}