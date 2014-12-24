/* Binary representation
   Lyubov Zhukova, group 171 */

#include <stdio.h>
int main()
{
    int num, i;
    printf ("Enter the number \n");
    scanf ("%d", &num);
    const int size = sizeof(int) * 8;
    for (i = 0; i < size; i++)
    {
        printf ("%d", (num >> size - 1) & 1);
        num = num << 1;
     }
printf ("\n");
}
