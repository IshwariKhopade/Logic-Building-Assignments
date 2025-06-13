//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment20_1.c
//  Description : Accept N Numbers from user and accept one another number as No, and check no is present or not.
//  Input : N : 6
//          iNo : 66
//          Elements : 85, 66, 3, 66, 93, 88
//  Output : Number is present (TRUE).
//  Author : Ishwari Bharat Khopade.
//  Date : 13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return 1;
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter Number of Elements:\n");
    scanf("%d", &iSize);

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element  %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is Present", iValue);
    }
    else
    {
        printf("%d is not Presnt", iValue);
    }

    free(p);

    return 0;
}
