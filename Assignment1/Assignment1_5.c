///////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment1_5.c
//  Description : Used to Accept one Number from User and print * on Screen
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}