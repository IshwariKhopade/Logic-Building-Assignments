//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment4_1.c
//  Description : Write aprogram which accepts Number from user and Display it's multiplication of factors.
//  Input : Integer
//  Output : Integer
//  Author : Ishwari Bharat Khopade
//  Date : 14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//  TimeComplexity = O(N/2)
int MultFact(int iNo)
{
    int iCnt = 0;
    int imult = 1;
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            imult = imult * iCnt;
        }
    }
    return imult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number:\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d is multiplication of factors", iRet);

    return 0;
}
