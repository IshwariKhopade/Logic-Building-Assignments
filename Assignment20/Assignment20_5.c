//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name : Assignment20_5.c
//  Description : Accept N Numbers from user and return product of all odd elements.
//  Input : N : 6
//          Elements : 1, 2, 3, 4, 5, 6
//  Output : 15
//  Author : Ishwari Bharat Khopade.
//  Date : 13/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iOdd = 1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iOdd = iOdd * Arr[iCnt];
        }
    }
    return iOdd;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Product(p, iSize);

    printf("Product is %d ", iRet);

    free(p);

    return 0;
}
