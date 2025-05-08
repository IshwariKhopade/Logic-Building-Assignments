//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name : Assignment3_4.c
//  Description : Used to Accept one Character from user & convert case of then character.
//  Author : Ishwari Bharat Khopade
//  Date : 08/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(isupper(cValue))
    {
        printf("%c\t", tolower(cValue));
    }
    else if(islower(cValue))
    {
        printf("%c\t", toupper(cValue));
    }
}

int main()
{
    char cValue = 0;

    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}