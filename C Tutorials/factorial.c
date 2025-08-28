// factorial using functions

#include<stdio.h>

int a(int n);

int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    
    printf("Factorial of %d = %d", n, a(n));
    return 0;
}

int a(int n) 
{
    if( n >= 1)
        return n*a(n-1);
    else
        return 1;
}

// factorial using recursive function.

#include <stdio.h>
#include <string.h>

int factorial(int n)
{
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
 
    if (num < 0) printf("Factorial undefined for negative numbers.\n");
    else printf("Factorial of %d = %d\n", num, factorial(num));
    
    return 0;
}