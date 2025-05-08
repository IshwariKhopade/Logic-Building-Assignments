///////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment2_2.c
//  Description : Used to Accept one Number from User & Print that number of "*" on screen
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int i = 0;
    while(iNo> i)
    {
        printf("*");
        iNo--;
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
