#include<stdio.h>

int main(){
    int n;

    printf("enter no.:");
    scanf("%d", &n);

    int s=0;
    for (int i =1; i < n; i++)
    {
        if (n%i == 0)
        {
            s=s+i;
        }
        
    }
    
    if (s == n)
    {
        printf("%d is a perfect no.",n);
    }
    else{
        printf("%d is not a perfect no.",n);
    }
    
    return 0;
}

