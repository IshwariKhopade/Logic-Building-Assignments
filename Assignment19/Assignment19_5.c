//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment19_5.c
//  Description : Accept N Numbers from user and accept one another number as No, return frequency of No from it.
//  Input : N : 6
//          iNo : 2
//          Elements : 85, 2, 22, 3, 2, 2, 11
//  Output : 3
//  Author : Ishwari Bharat Khopade.
//  Date : 11/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int frequency(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNum)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0, iCnt = 0, iNo;
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

    printf("Enter Number to get Frequency : \n");
    scanf("%d", &iNo);

    iRet = frequency(p, iSize, iNo);

    printf("%d", iRet);

    free(p);

    return 0;
}
