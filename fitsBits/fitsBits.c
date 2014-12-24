/* FitsBits
   Lyubov Zhukova, group 171 */

#include <stdio.h>
int main ()
{
    int num, n, res;
    printf ("Enter number\n");
    scanf ("%d", &num);
    printf ("Enter computer word size\n");
    scanf ("%d", &n);
    num = !!(num >> 31) * (~ (num - 1) - 1) | !(num >> 31) * num;
    res = !(num >> (n - 1));
    printf ("%d\n", res);
    
}
