//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment22_3.c
//  Description : Accept Character from user and check whether it is digit or not (0-9).
//  Input : 2   
//  Output : True
//  Author : Ishwari Bharat Khopade.
//  Date : 02/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character:\n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("Entered Character is a Digit");
    }
    else
    {
        printf("Entered Charater is not a Digit");
    }

    return 0;
}
