//Write a C program to add, sub, divide and multiply two numbers.
#include<stdio.h>

// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     printf("add = %d \n", a+b);
//     printf("sub = %d \n", a-b);
//     printf("mul = %d \n", a*b);
//     printf("divide = %d \n", a/b);
// }


// Write a program to find the sum of digits of a number

// int main()
// {
//     int n,s=0,c;
//     scanf("%d", &n);

//     for(int i = n; i>0 ; i=i/10)
//     {
//         c=i%10;
//         s=s+c;
//     }
//     printf("%d", s);
// }

// Write a program to reverse a number and check whether it is palindrome or not.

int main()
{
    int n,rev=0,c;
    scanf("%d", &n);

    for(int i=n; i>0 ;i=i/10)
    {
        c=i%10;
        rev = (rev*10) + c;
    }

    if(rev==n) printf("No. is palindrome");
    else printf("No. is not palindrome");

    return 0;
}

//using pointers

#include <stdio.h>

void reverseNumber(int *n)
{
 int num=*n;
 int rev=0;
 while(*n>0)
 {
 int r=*n%10;
 rev=rev*10+r;
 *n/=10;
 }
 *n=rev;
}
int main()
{
 int n;
 printf("Enter a number: \n");
 scanf("%d",&n);
 reverseNumber(&n);
 printf("Reversed Number: %d\n",n);
 return 0;
}
