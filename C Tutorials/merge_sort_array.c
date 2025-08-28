#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter no. of elements of array 1 : ");
    scanf("%d",&x);
    printf("Enter no. of elements of array 2 : ");
    scanf("%d",&y);

    int a[x],b[y],c[x+y];

    printf("Enter the elements of array 1 :\n");
    for(int i = 0 ; i<x ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements of array 2 :\n");
    for(int i = 0 ; i<y ; i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i = 0; i<x; i++)
    {
        c[i] = a[i];
    }

    for(int i = x; i<(x+y); i++)
    {
        c[i] = b[i-x];
    }

    printf("the merged array is : ");
    for(int i = 0; i<(x+y); i++)
    {
        printf("%d ", c[i]);
    }
    
    printf("\n");

    int temp;
    for(int i = 0; i<(x+y-1); i++)
    {
        for(int j = 0; j<(x+y-1-i); j++)
        {
            if( c[j]>c[j+1])
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    printf("the sorted array is : ");
    for(int i = 0; i<(x+y); i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}