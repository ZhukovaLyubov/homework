/* Exponentiation
   Lyubov Zhukova, group 171 */

#include <stdio.h> 
int main ()
{
    int a, n, i, k;
    float res = 1.0;
    printf ("Enter base of the degree\n");
    scanf ("%d", &a);
    printf ("Enter the exponent\n");
    scanf ("%d", &n);
    if (n < 0)
    {
        k = n;	
        n = -n; 
    }
    while (n)
    {
        if (n & 1)
        {
            res = res * a;
        }
        a = a * a;
        n >>= 1;
                        
    }
printf ("Result = ");
if (k < 0)
{
    printf ("%f\n", 1 / res);
}
else
{
    printf ("%f\n", res);
}
}
        
