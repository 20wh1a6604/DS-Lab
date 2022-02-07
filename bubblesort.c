#include<stdio.h>
int main
{
    int arr[100], n, c1, c2, swap;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    printf("enter the integers \n");
    for(c1 = 0; c1 < n; c1++)
    {
        scanf("%d", &arr[c1]);
    }
    for(c1 = 0; c1 < n-1; c1++)
    {
        for(c2 = 0; c2 < n-c1-1; c2++)
        {
            if (arr[c2] > arr[c2+1])
            {
                swap = arr[c2];
                arr[c2] = arr[c2+1];
                arr[c2+1] = swap;
            }
        }
    }
    printf("sorted list in ascending order\n");
    for (c1 = 0; c1 < n; c1++)
    {
        printf("%d\n", arr[c1]);
    }
    return 0;
}
