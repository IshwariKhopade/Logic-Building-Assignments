//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment22_2.c
//  Description : Accept Alphabet from user and check whether the alphabet is Capital or not (A-Z).
//  Input : F
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

BOOL ChkAlpha(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("Entered Character is a Capital Alphabet");
    }
    else
    {
        printf("Entered Charater is not a Capital Alphabet");
    }

    return 0;
}
