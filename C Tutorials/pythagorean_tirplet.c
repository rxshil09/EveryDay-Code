#include <stdio.h>

int main()
{
   for (int a = 1; a<=30 ; a++)
   {
      for (int b = a; b <= 30; b++)
      {
         for (int c = 1; c <= 30; c++)
         {
            if (a*a + b*b == c*c)
            {
               printf(" The pythagorean triplet is : %d, %d, %d \n", a,b,c);
            }
         }
      }     
   }
}
