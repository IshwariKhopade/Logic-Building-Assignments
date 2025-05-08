///////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment2_2.c
//  Description : Used to Accept one Number from User if number is less than 10 then 
//                Print "Hello" on screen otherwise print "Demo".
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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