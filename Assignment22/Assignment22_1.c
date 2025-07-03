//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment22_1.c
//  Description : Accept Alphabet from user and check whether it is alphabet or not (A-Z) and (a-z).
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
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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
        printf("Entered Character is Alphabet");
    }
    else
    {
        printf("Entered Charater is not Alphabet");
    }

    return 0;
}
