#include<stdio.h>

int len(char arr[])
{
    int c = 0;
    for(int i = 0; i < arr[i] != '\0'; i++)
    {
        if( arr[i] == ' ')
            continue;
        c++;
    }

    return c;
}
void main()
{
    char name[100];
    printf("Enter name: ");
    fgets(name, 100, stdin);

    printf("no. of letters in your name is : %d", len(name));
}