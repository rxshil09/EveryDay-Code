#include<stdio.h>
                    //bubble sort algorithm works on the principle of comparing and swapping adjacent elements
int main()
{
    printf("Enter size of array:");
    int n;
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements of array :");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    // bubble sort in ascending order
    int temp;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if( a[j] > a[j+1] ) //for descending order just change the sign to the following " a[j] < a[j+1] "
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The sorted array is :");

    for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}