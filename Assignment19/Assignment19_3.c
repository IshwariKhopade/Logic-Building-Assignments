//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment19_3.c
//  Description : Accept N Numbers from user and check whether that number contains 11 in it or not.
//  Input : N : 6
//          Elements : 85, 66, 11, 80, 93, 88
//  Output : 11 is present
//  Author : Ishwari Bharat Khopade.
//  Date : 11/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *p = NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d", &iSize);

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

    bRet = Check(p, iSize);

    if (bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;
}
