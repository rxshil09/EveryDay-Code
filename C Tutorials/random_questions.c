#include<stdio.h>  
#include<math.h>

// int main()    
// {    
// int n,r,sum=0,temp;    
// printf("enter the number=");    
// scanf("%d",&n);    
// temp=n;    
// while(n>0)    
// {    
// r=n%10;    
// sum=sum+(r*r*r);    
// n=n/10;    
// }    
// if(temp==sum)    
// printf("armstrong  number ");    
// else    
// printf("not armstrong number");    
// return 0;  
// }

int main()
{
    int x,y,a=1;//x>y
    scanf("%d %d",&x,&y);

    for(int i = 2; i<=x; i++)
    {
        int c1=x%i;
        int c2=y%i;
        if(c1==0 || c2==0)
        {
            if(c1==0)
            x/=i;
            if(c2==0)
            y/=i;
            a=a*i;
            i--;
        }   
    }
    printf("%d",a);
    return 0;
}