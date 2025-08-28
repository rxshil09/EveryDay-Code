#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ab;
    printf("enter the element you want to find location of : ");
    scanf("%d",&ab);

    int found = 0;
    for(int i = 0; i<n; i++)
    {
        if( a[i] == ab)
        {
            printf("found at location %d", i);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Not found");
    }
    return 0;
}