//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment19_4.c
//  Description : Accept N Numbers from user and return frequency of 11 from it.
//  Input : N : 6
//          Elements : 85, 66, 11, 80, 93, 11
//  Output : 2
//  Author : Ishwari Bharat Khopade.
//  Date : 11/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = frequency(p, iSize);

    printf("%d", iRet);

    free(p);

    return 0;
}
