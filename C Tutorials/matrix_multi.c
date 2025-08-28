#include <stdio.h>
#include <math.h>

void main()
{
   
   int n,m;
   scanf("%d %d", &n, &m);
   int a[n][m];

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m;  j++)
    {
        scanf("%d", &a[i][j]);
    }
   }

   int x,y;
   scanf("%d %d", &x, &y);
   int b[x][y];

   for (int i = 0; i < x; i++)
   {
    for (int j = 0; j < y; j++)
    {
        scanf("%d", &b[i][j]);
    }
   }

    if (m == x)
    {
        int c[n][y];
        printf("matrix multiplication is possible\n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
              c[i][j]=0;
                for (int k = 0; k < m; k++)
                {
                    c[i][j] += a[i][k]*b[k][j]; 
                }
                
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d \t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix mutli is not possible");
    }

}