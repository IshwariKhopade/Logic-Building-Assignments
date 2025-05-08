//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment2_5.c
//  Description : Used to Accept one Number from User & check whether number is even or odd.
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define ERR -1

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo<0)
    {
        return ERR;
    }
    else if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet == 1)
    {
        printf("The entered number is Even Number");
    }
    else if (bRet == -1)
    {
        printf("Please Enter positive number");
    }
    else
    {
        printf("The entered number is Odd Number");
    }
    
    return 0;
}
