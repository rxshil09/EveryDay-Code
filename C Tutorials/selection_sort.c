#include<stdio.h>
                    //selection sort works on the principle of putting the minimum size element on the index and repeating the same 
void main()
{
    printf("Enter size of array : ");
    int n;
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements of array : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    //selection sort
    int min, temp;
    for(int i = 0; i<n-1; i++)
    {
        min = i;
        for(int j = i+1; j<n; j++)
        {
            if( a[j] < a[min] )
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("The sorted array is :");

    for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}