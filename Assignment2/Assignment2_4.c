///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment2_2.c
//  Description : Used to Accept one Number from User if number is less than 10 then 
//                Print "Hello" on screen otherwise print "Demo".
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i=1; i<=iFrequency; i++)
    {
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);
    printf("Enter Frequency:");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return 0;
}
