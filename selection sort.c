int main()
{
    int arr[100], n, c1, c2, temp;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    printf("enter the integers \n");
    for(c1 = 0; c1 < n; c1++)
    {
        scanf("%d", &arr[c1]);
    }
    for(c1=0;c1 < n;c1++)
    {
        for(c2 = c1+1; c2 < n; c2++)
        {
           if(arr[c1] > arr[c2])
           {
               temp = arr[c1];
               arr[c1] = arr[c2];
               arr[c2] = temp;
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


