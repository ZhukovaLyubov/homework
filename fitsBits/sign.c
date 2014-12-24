/* Sign of number
   Lyubov Zhukova, group 171 */

#include <stdio.h>
int main ()
{
    int num;
    printf ("Enter number\n");
    scanf ("%d", &num);
    num = num >> 31 | !!num;
printf ("%d\n", num);
}
