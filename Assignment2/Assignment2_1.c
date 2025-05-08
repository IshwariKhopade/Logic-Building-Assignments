////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment2_1.c
//  Description : Used to one Number from User & Print that Number of * on Screen
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

