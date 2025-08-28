#include<stdio.h>
#include<string.h>
 
int main()
{
    // enter a string by user using %c
 
    // char a[100];
    // char ch;
    // int i = 0 ;
 
    // while( ch != '\n')
    // {
    //     scanf("%c", &ch);
    //     a[i] = ch;
    //     i++;
    // }
    // a[i] = '\0';
    // puts(a);
 
 
    // WAP to print the no. of times a character appears in a specific string
    char arr[100];
    fgets(arr,100,stdin);
 
    char ch;
    printf("enter the charcter you want to check : ");
    scanf("%c", &ch);
 
    int c = 0;
    for(int i = 0; arr[i] != '\0'; i++ )
    {
        if(arr[i] == ch)
        {
            c++;
        }
    }
 
    printf("the character '%c' is present %d times in the string", ch,c);
    return 0;
}