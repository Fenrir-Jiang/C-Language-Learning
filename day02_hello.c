#include <stdio.h>

int main() 
{
   double foot, inch;
   scanf("%lf %lf", &foot, &inch);
   printf("your height is %f\n",(foot + inch /12)*0.3048);

    return 0;
}